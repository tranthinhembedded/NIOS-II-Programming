using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;
using ClosedXML.Excel;
using System.IO;
using System.Windows.Forms.VisualStyles;
using System.Media;
namespace Digital_clock_app
{
    public partial class Form1 : Form
    {
        private Timer timer;
        private Timer scheduleTimer;
        private Timer serialReadTimer; // Timer for reading serial data
        SerialPort serialPort = new SerialPort();
        private readonly string excelFilePath = @"D:\Schedules\Schedules.xlsx";
        private readonly string audioFilePath = @"D:\Schedules\reminder.wav";
        private SoundPlayer soundPlayer;
        private bool isReminderActive = false;
        private const string clearPassword = "123456"; // Hardcoded password for clearing schedule

        // Individual time variables
        private int day;
        private int month;
        private int year;
        private int hour;
        private int min;
        private int sec;
        public Form1()
        {
            InitializeComponent();
            soundPlayer = new SoundPlayer(audioFilePath);
        }

     
         

        private void CenterClockLabel()
        {
            labelClk.Left = (this.ClientSize.Width - labelClk.Width) / 2;
            labelClk.Top = (int)((this.ClientSize.Height / 5.0) - (labelClk.Height / 2));
            labelDate.Left = (this.ClientSize.Width - labelDate.Width) / 2;
            labelDate.Top = labelClk.Bottom + 2;
        }


        private void Form1_Load(object sender, EventArgs e)
        {
            CenterClockLabel();
            
            timer = new Timer();
            timer.Interval = 1000; 
            timer.Tick += timer1_Tick;
            timer.Start();

            // Timer to check schedule every minute
            scheduleTimer = new Timer();
            scheduleTimer.Interval = 1000; // Check every minute
            scheduleTimer.Tick += scheduleTimer_Tick;
            scheduleTimer.Start();

            comboBoxPorts.DataSource = SerialPort.GetPortNames();
            closeBtn.Enabled = false;
            updateTimeBtn.Enabled = false;
            addplanBtn.Enabled = false;
            showplanBtn.Enabled = false;
            textBoxName.Enabled = false;
            textBoxDD.Enabled = false;
            textBoxMM.Enabled = false;
            textBoxYYYY.Enabled = false;
            textBoxHH.Enabled = false;
            textBoxMin.Enabled = false;
            clrBtn.Enabled = false;

        }

        private void Form1_Resize(object sender, EventArgs e)
        {
            CenterClockLabel();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            // Get the current date and time
            DateTime currentTime = DateTime.Now;

            // Update individual time variables
            day = currentTime.Day;
            month = currentTime.Month;
            year = currentTime.Year;
            hour = currentTime.Hour;
            min = currentTime.Minute;
            sec = currentTime.Second;

            // Update the clock and date display
            labelClk.Text = currentTime.ToString("HH:mm:ss");
            labelDate.Text = currentTime.ToString("dddd, dd.MM.yyyy");

        }
        private void scheduleTimer_Tick(object sender, EventArgs e)
        {
            if (!File.Exists(excelFilePath) || isReminderActive)
                return;

            try
            {
                using (var workbook = new XLWorkbook(excelFilePath))
                {
                    var worksheet = workbook.Worksheet(1);
                    var rows = worksheet.RowsUsed().Skip(1).ToList(); // Skip header row, convert to list to avoid enumeration issues

                    DateTime currentTime = DateTime.Now;
                    string currentDateStr = currentTime.ToString("dd.MM.yyyy");
                    string currentTimeStr = currentTime.ToString("HH:mm");

                    foreach (var row in rows)
                    {
                        string name = row.Cell(1).GetString();
                        string date = row.Cell(2).GetString();
                        string time = row.Cell(3).GetString();

                        if (date == currentDateStr && time == currentTimeStr)
                        {
                            isReminderActive = true;
                            serialPort.WriteLine("A");
                            
                            soundPlayer.PlayLooping(); // Play audio in loop
                            DialogResult result = MessageBox.Show(
                                $"Reminder: {name}\nTime: {time}",
                                "Schedule Reminder",
                                MessageBoxButtons.OK,
                                MessageBoxIcon.Information);

                            if (result == DialogResult.OK)
                            {
                                soundPlayer.Stop(); // Stop audio when OK is clicked
                                isReminderActive = false;

                                // Delete the row from the Excel file
                                row.Delete(); // Remove the row
                                workbook.Save(); // Save the updated file
                            }
                            break; // Exit loop after handling the reminder
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                labelFileStatus.Text = "Error checking schedule!!!";
                labelFileStatus.ForeColor = Color.Red;
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void openBtn_Click(object sender, EventArgs e)
        {
            try
            {
                if (comboBoxPorts.SelectedItem != null && !serialPort.IsOpen)
                {
                    serialPort.PortName = comboBoxPorts.SelectedItem.ToString();
                    serialPort.BaudRate = 9600; // Default baud rate
                    serialPort.Open();
                    labelStatus.Text = "Connecting";
                    labelStatus.ForeColor = Color.Lime;
                  

                    closeBtn.Enabled = true;
                    updateTimeBtn.Enabled = true;
                    addplanBtn.Enabled = true;
                    showplanBtn.Enabled = true;
                    textBoxName.Enabled = true;
                    textBoxDD.Enabled = true;
                    textBoxMM.Enabled = true;
                    textBoxYYYY.Enabled = true;
                    textBoxHH.Enabled = true;
                    textBoxMin.Enabled = true;
                    clrBtn.Enabled = true;
                }
            }
            catch (Exception ex)
            {
                labelStatus.Text = "Error: " + ex.Message;
                labelStatus.ForeColor = Color.Red;
            }
        }

        private void closeBtn_Click(object sender, EventArgs e)
        {
            try
            {
                if (serialPort.IsOpen)
                {
                 
                    serialPort.Close();
                    labelStatus.Text = "Disconnected...";
                    labelStatus.ForeColor = Color.Red;

                    // Disable controls after disconnecting
                    closeBtn.Enabled = false;
                    updateTimeBtn.Enabled = false;
                    addplanBtn.Enabled = false;
                    showplanBtn.Enabled = false;
                    textBoxName.Enabled = false;
                    textBoxDD.Enabled = false;
                    textBoxMM.Enabled = false;
                    textBoxYYYY.Enabled = false;
                    textBoxHH.Enabled = false;
                    textBoxMin.Enabled = false;
                    clrBtn.Enabled = false;
                }
            }
            catch (Exception ex)
            {
                labelStatus.Text = "Error: " + ex.Message;
                labelStatus.ForeColor = Color.Red;
            }
        }

        private void updateTimeBtn_Click(object sender, EventArgs e)
        {
            if (serialPort.IsOpen)
            {
                try
                {
                    // Format the time variables into the required string: $ddmmyyyyhhMMss%
                    string timeString = $"${day:D2}{month:D2}{year:D4}{hour:D2}{min:D2}{sec:D2}%";
                    serialPort.Write(timeString); // Send the formatted string
                    serialPort.WriteLine("\n");
                    labelStatus.Text = "Time sent successfully";
                    labelStatus.ForeColor = Color.Lime;
                }
                catch (Exception ex)
                {
                    labelStatus.Text = "Error: " + ex.Message;
                    labelStatus.ForeColor = Color.Red;
                }
            }
            else
            {
                labelStatus.Text = "Error: Port not open";
                labelStatus.ForeColor = Color.Red;
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void addplanBtn_Click(object sender, EventArgs e)
        {
            try
            {
                // Validate input
                if (string.IsNullOrWhiteSpace(textBoxName.Text) ||
                    string.IsNullOrWhiteSpace(textBoxDD.Text) ||
                    string.IsNullOrWhiteSpace(textBoxMM.Text) ||
                    string.IsNullOrWhiteSpace(textBoxYYYY.Text) ||
                    string.IsNullOrWhiteSpace(textBoxHH.Text) ||
                    string.IsNullOrWhiteSpace(textBoxMin.Text))
                {
                    labelFileStatus.Text = "Error: All fields must be filled";
                    labelFileStatus.ForeColor = Color.Red;
                    return;
                }

                // Combine date and time
                string date = $"{textBoxDD.Text}.{textBoxMM.Text}.{textBoxYYYY.Text}";
                string time = $"{textBoxHH.Text}:{textBoxMin.Text}";

                // Validate date and time format
                if (!int.TryParse(textBoxDD.Text, out int day) || day < 1 || day > 31 ||
                    !int.TryParse(textBoxMM.Text, out int month) || month < 1 || month > 12 ||
                    !int.TryParse(textBoxYYYY.Text, out int year) || year < 1900 || year > 9999 ||
                    !int.TryParse(textBoxHH.Text, out int hour) || hour < 0 || hour > 23 ||
                    !int.TryParse(textBoxMin.Text, out int minute) || minute < 0 || minute > 59)
                {
                    labelFileStatus.Text = "Error: Invalid date or time format";
                    labelFileStatus.ForeColor = Color.Red;
                    return;
                }

                // Ensure the directory exists
                string directory = Path.GetDirectoryName(excelFilePath);
                if (!Directory.Exists(directory))
                {
                    Directory.CreateDirectory(directory);
                }

                // Open or create the Excel file
                using (var workbook = File.Exists(excelFilePath) ? new XLWorkbook(excelFilePath) : new XLWorkbook())
                {
                    var worksheet = workbook.Worksheets.FirstOrDefault() ?? workbook.AddWorksheet("Schedules");

                    // Find the last row
                    int lastRow = worksheet.LastRowUsed()?.RowNumber() ?? 0;
                    if (lastRow == 0)
                    {
                        // Add headers if the sheet is empty
                        worksheet.Cell(1, 1).Value = "Name";
                        worksheet.Cell(1, 2).Value = "Date";
                        worksheet.Cell(1, 3).Value = "Time";
                        lastRow = 1;
                    }

                    // Add the new plan data
                    worksheet.Cell(lastRow + 1, 1).Value = textBoxName.Text;
                    worksheet.Cell(lastRow + 1, 2).Value = date;
                    worksheet.Cell(lastRow + 1, 3).Value = time;

                    // Save the workbook
                    workbook.SaveAs(excelFilePath);

                    labelFileStatus.Text = "Plan added successfully";
                    labelFileStatus.ForeColor = Color.Lime;

                    // Clear the textboxes after adding
                    textBoxName.Clear();
                    textBoxDD.Clear();
                    textBoxMM.Clear();
                    textBoxYYYY.Clear();
                    textBoxHH.Clear();
                    textBoxMin.Clear();
                }
            }
            catch (Exception ex)
            {
                labelFileStatus.Text = "Error: " + ex.Message;
                labelFileStatus.ForeColor = Color.Red;
            }
        }

        private void showplanBtn_Click(object sender, EventArgs e)
        {
            try
            {
                if (File.Exists(excelFilePath))
                {
                    // Open the Excel file using the default application
                    System.Diagnostics.Process.Start(new System.Diagnostics.ProcessStartInfo
                    {
                        FileName = excelFilePath,
                        UseShellExecute = true
                    });
                }
                else
                {
                    labelFileStatus.Text = "Error: Schedule file not found";
                    labelFileStatus.ForeColor = Color.Red;
                }
            }
            catch (Exception ex)
            {
                labelFileStatus.Text = "Error: " + ex.Message;
                labelFileStatus.ForeColor = Color.Red;
            }
        }

        private void clrBtn_Click(object sender, EventArgs e)
        {
            // Show password prompt dialog
            using (var passwordForm = new PasswordPromptForm())
            {
                DialogResult result = passwordForm.ShowDialog();

                // If user clicks Cancel, abort the operation
                if (result == DialogResult.Cancel)
                {
                    labelFileStatus.Text = "Clear operation cancelled";
                    labelFileStatus.ForeColor = Color.Yellow;
                    return;
                }

                // Check if the entered password is correct
                if (passwordForm.EnteredPassword != clearPassword)
                {
                    labelFileStatus.Text = "Error: Incorrect password";
                    labelFileStatus.ForeColor = Color.Red;
                    return;
                }

                // Proceed with clearing the schedule if password is correct
                try
                {
                    if (!File.Exists(excelFilePath))
                    {
                        labelFileStatus.Text = "Schedule file not found";
                        labelFileStatus.ForeColor = Color.Red;
                        return;
                    }

                    using (var workbook = new XLWorkbook(excelFilePath))
                    {
                        var worksheet = workbook.Worksheet(1);
                        // Delete all rows except the header row (row 1)
                        var rowsToDelete = worksheet.RowsUsed().Skip(1).ToList(); // Skip the header row
                        foreach (var row in rowsToDelete)
                        {
                            row.Delete();
                        }

                        // Save the updated workbook
                        workbook.Save();
                        labelFileStatus.Text = "Schedule cleared successfully";
                        labelFileStatus.ForeColor = Color.Lime;
                    }
                }
                catch (Exception ex)
                {
                    labelFileStatus.Text = "Error clearing schedule: " + ex.Message;
                    labelFileStatus.ForeColor = Color.Red;
                }
            }
            }

    }
}
