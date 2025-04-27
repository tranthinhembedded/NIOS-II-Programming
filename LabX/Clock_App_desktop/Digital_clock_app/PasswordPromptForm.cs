using System;
using System.Windows.Forms;

namespace Digital_clock_app
{
    public partial class PasswordPromptForm : Form
    {
        private TextBox textBoxPassword;
        private Button buttonOK;
        private Button buttonCancel;
        private Label labelPrompt;

        public string EnteredPassword { get; private set; }

        public PasswordPromptForm()
        {
            InitializeComponent();
        }

        private void InitializeComponent()
        {
            this.Size = new System.Drawing.Size(300, 150);
            this.Text = "Password Confirmation";
            this.FormBorderStyle = FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.StartPosition = FormStartPosition.CenterParent;

            labelPrompt = new Label();
            labelPrompt.Text = "Enter password to clear schedule:";
            labelPrompt.Location = new System.Drawing.Point(20, 20);
            labelPrompt.Size = new System.Drawing.Size(240, 20);

            textBoxPassword = new TextBox();
            textBoxPassword.Location = new System.Drawing.Point(20, 50);
            textBoxPassword.Size = new System.Drawing.Size(240, 20);
            textBoxPassword.PasswordChar = '*'; // Hide password input

            buttonOK = new Button();
            buttonOK.Text = "OK";
            buttonOK.Location = new System.Drawing.Point(100, 80);
            buttonOK.Size = new System.Drawing.Size(75, 30);
            buttonOK.Click += ButtonOK_Click;

            buttonCancel = new Button();
            buttonCancel.Text = "Cancel";
            buttonCancel.Location = new System.Drawing.Point(185, 80);
            buttonCancel.Size = new System.Drawing.Size(75, 30);
            buttonCancel.Click += ButtonCancel_Click;

            this.Controls.Add(labelPrompt);
            this.Controls.Add(textBoxPassword);
            this.Controls.Add(buttonOK);
            this.Controls.Add(buttonCancel);
        }

        private void ButtonOK_Click(object sender, EventArgs e)
        {
            EnteredPassword = textBoxPassword.Text;
            this.DialogResult = DialogResult.OK;
            this.Close();
        }

        private void ButtonCancel_Click(object sender, EventArgs e)
        {
            this.DialogResult = DialogResult.Cancel;
            this.Close();
        }
    }
}