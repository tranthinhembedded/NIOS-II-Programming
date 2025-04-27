namespace Digital_clock_app
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.groupBoxControl = new System.Windows.Forms.GroupBox();
            this.labelStatus = new System.Windows.Forms.Label();
            this.updateTimeBtn = new System.Windows.Forms.Button();
            this.closeBtn = new System.Windows.Forms.Button();
            this.openBtn = new System.Windows.Forms.Button();
            this.comboBoxPorts = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.labelDate = new System.Windows.Forms.Label();
            this.labelClk = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.clrBtn = new System.Windows.Forms.Button();
            this.labelFileStatus = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBoxMin = new System.Windows.Forms.TextBox();
            this.textBoxHH = new System.Windows.Forms.TextBox();
            this.textBoxYYYY = new System.Windows.Forms.TextBox();
            this.textBoxMM = new System.Windows.Forms.TextBox();
            this.textBoxDD = new System.Windows.Forms.TextBox();
            this.textBoxName = new System.Windows.Forms.TextBox();
            this.showplanBtn = new System.Windows.Forms.Button();
            this.addplanBtn = new System.Windows.Forms.Button();
            this.groupBoxControl.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // serialPort1
            // 
            //this.serialPort1.DataReceived += new System.IO.Ports.SerialDataReceivedEventHandler(this.serialPort1_DataReceived);
            // 
            // timer1
            // 
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // groupBoxControl
            // 
            this.groupBoxControl.Controls.Add(this.labelStatus);
            this.groupBoxControl.Controls.Add(this.updateTimeBtn);
            this.groupBoxControl.Controls.Add(this.closeBtn);
            this.groupBoxControl.Controls.Add(this.openBtn);
            this.groupBoxControl.Controls.Add(this.comboBoxPorts);
            this.groupBoxControl.Controls.Add(this.label1);
            this.groupBoxControl.Font = new System.Drawing.Font("Consolas", 7.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBoxControl.ForeColor = System.Drawing.Color.Cyan;
            this.groupBoxControl.Location = new System.Drawing.Point(33, 353);
            this.groupBoxControl.Name = "groupBoxControl";
            this.groupBoxControl.Size = new System.Drawing.Size(327, 214);
            this.groupBoxControl.TabIndex = 1;
            this.groupBoxControl.TabStop = false;
            this.groupBoxControl.Text = "SERIAL CONTROL";
            // 
            // labelStatus
            // 
            this.labelStatus.AutoSize = true;
            this.labelStatus.ForeColor = System.Drawing.Color.Red;
            this.labelStatus.Location = new System.Drawing.Point(92, 96);
            this.labelStatus.Name = "labelStatus";
            this.labelStatus.Size = new System.Drawing.Size(126, 15);
            this.labelStatus.TabIndex = 2;
            this.labelStatus.Text = "Disconnected.....";
            this.labelStatus.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.labelStatus.Click += new System.EventHandler(this.label2_Click);
            // 
            // updateTimeBtn
            // 
            this.updateTimeBtn.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.updateTimeBtn.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.updateTimeBtn.Location = new System.Drawing.Point(46, 114);
            this.updateTimeBtn.Name = "updateTimeBtn";
            this.updateTimeBtn.Size = new System.Drawing.Size(223, 26);
            this.updateTimeBtn.TabIndex = 3;
            this.updateTimeBtn.Text = "UPDATE TIME FOR KIT";
            this.updateTimeBtn.UseVisualStyleBackColor = false;
            this.updateTimeBtn.Click += new System.EventHandler(this.updateTimeBtn_Click);
            // 
            // closeBtn
            // 
            this.closeBtn.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.closeBtn.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.closeBtn.Location = new System.Drawing.Point(165, 70);
            this.closeBtn.Name = "closeBtn";
            this.closeBtn.Size = new System.Drawing.Size(75, 23);
            this.closeBtn.TabIndex = 3;
            this.closeBtn.Text = "CLOSE";
            this.closeBtn.UseVisualStyleBackColor = false;
            this.closeBtn.Click += new System.EventHandler(this.closeBtn_Click);
            // 
            // openBtn
            // 
            this.openBtn.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.openBtn.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.openBtn.Location = new System.Drawing.Point(68, 70);
            this.openBtn.Name = "openBtn";
            this.openBtn.Size = new System.Drawing.Size(75, 23);
            this.openBtn.TabIndex = 2;
            this.openBtn.Text = "OPEN";
            this.openBtn.UseVisualStyleBackColor = false;
            this.openBtn.Click += new System.EventHandler(this.openBtn_Click);
            // 
            // comboBoxPorts
            // 
            this.comboBoxPorts.BackColor = System.Drawing.Color.LightCyan;
            this.comboBoxPorts.Font = new System.Drawing.Font("Consolas", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.comboBoxPorts.FormattingEnabled = true;
            this.comboBoxPorts.Location = new System.Drawing.Point(68, 27);
            this.comboBoxPorts.Name = "comboBoxPorts";
            this.comboBoxPorts.Size = new System.Drawing.Size(172, 28);
            this.comboBoxPorts.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Consolas", 7.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(20, 30);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(42, 15);
            this.label1.TabIndex = 0;
            this.label1.Text = "Ports";
            // 
            // labelDate
            // 
            this.labelDate.AutoSize = true;
            this.labelDate.Font = new System.Drawing.Font("Felix Titling", 22.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelDate.ForeColor = System.Drawing.Color.Cyan;
            this.labelDate.Location = new System.Drawing.Point(283, 228);
            this.labelDate.Name = "labelDate";
            this.labelDate.Size = new System.Drawing.Size(325, 43);
            this.labelDate.TabIndex = 2;
            this.labelDate.Text = "Mon 00.00.0000";
            this.labelDate.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            // 
            // labelClk
            // 
            this.labelClk.AutoSize = true;
            this.labelClk.Font = new System.Drawing.Font("Digital Dismay", 120F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelClk.ForeColor = System.Drawing.Color.Cyan;
            this.labelClk.Location = new System.Drawing.Point(85, 19);
            this.labelClk.Name = "labelClk";
            this.labelClk.Size = new System.Drawing.Size(792, 209);
            this.labelClk.TabIndex = 0;
            this.labelClk.Text = "00:00:00";
            this.labelClk.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.clrBtn);
            this.groupBox1.Controls.Add(this.labelFileStatus);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label7);
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.textBoxMin);
            this.groupBox1.Controls.Add(this.textBoxHH);
            this.groupBox1.Controls.Add(this.textBoxYYYY);
            this.groupBox1.Controls.Add(this.textBoxMM);
            this.groupBox1.Controls.Add(this.textBoxDD);
            this.groupBox1.Controls.Add(this.textBoxName);
            this.groupBox1.Controls.Add(this.showplanBtn);
            this.groupBox1.Controls.Add(this.addplanBtn);
            this.groupBox1.Font = new System.Drawing.Font("Consolas", 7.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.ForeColor = System.Drawing.Color.Cyan;
            this.groupBox1.Location = new System.Drawing.Point(474, 353);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(389, 214);
            this.groupBox1.TabIndex = 4;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "SCHEDULE CONTROL";
            // 
            // clrBtn
            // 
            this.clrBtn.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.clrBtn.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.clrBtn.Location = new System.Drawing.Point(270, 136);
            this.clrBtn.Name = "clrBtn";
            this.clrBtn.Size = new System.Drawing.Size(95, 23);
            this.clrBtn.TabIndex = 6;
            this.clrBtn.Text = "CLEAR DATA";
            this.clrBtn.UseVisualStyleBackColor = false;
            this.clrBtn.Click += new System.EventHandler(this.clrBtn_Click);
            // 
            // labelFileStatus
            // 
            this.labelFileStatus.AutoSize = true;
            this.labelFileStatus.Font = new System.Drawing.Font("Consolas", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelFileStatus.Location = new System.Drawing.Point(6, 184);
            this.labelFileStatus.Name = "labelFileStatus";
            this.labelFileStatus.Size = new System.Drawing.Size(136, 18);
            this.labelFileStatus.TabIndex = 5;
            this.labelFileStatus.Text = "File Status.....";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(128, 92);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(14, 15);
            this.label5.TabIndex = 4;
            this.label5.Text = ":";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(18, 88);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(35, 15);
            this.label4.TabIndex = 4;
            this.label4.Text = "Time";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(203, 63);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(14, 15);
            this.label7.TabIndex = 4;
            this.label7.Text = "-";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(129, 63);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(14, 15);
            this.label6.TabIndex = 4;
            this.label6.Text = "-";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(18, 63);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(35, 15);
            this.label3.TabIndex = 4;
            this.label3.Text = "Date";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(18, 34);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(35, 15);
            this.label2.TabIndex = 4;
            this.label2.Text = "Name";
            // 
            // textBoxMin
            // 
            this.textBoxMin.Location = new System.Drawing.Point(148, 89);
            this.textBoxMin.Name = "textBoxMin";
            this.textBoxMin.Size = new System.Drawing.Size(49, 23);
            this.textBoxMin.TabIndex = 4;
            this.textBoxMin.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // textBoxHH
            // 
            this.textBoxHH.Location = new System.Drawing.Point(73, 88);
            this.textBoxHH.Name = "textBoxHH";
            this.textBoxHH.Size = new System.Drawing.Size(49, 23);
            this.textBoxHH.TabIndex = 4;
            this.textBoxHH.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // textBoxYYYY
            // 
            this.textBoxYYYY.Location = new System.Drawing.Point(218, 60);
            this.textBoxYYYY.Name = "textBoxYYYY";
            this.textBoxYYYY.Size = new System.Drawing.Size(66, 23);
            this.textBoxYYYY.TabIndex = 4;
            this.textBoxYYYY.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // textBoxMM
            // 
            this.textBoxMM.Location = new System.Drawing.Point(148, 60);
            this.textBoxMM.Name = "textBoxMM";
            this.textBoxMM.Size = new System.Drawing.Size(49, 23);
            this.textBoxMM.TabIndex = 4;
            this.textBoxMM.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // textBoxDD
            // 
            this.textBoxDD.Location = new System.Drawing.Point(73, 60);
            this.textBoxDD.Name = "textBoxDD";
            this.textBoxDD.Size = new System.Drawing.Size(49, 23);
            this.textBoxDD.TabIndex = 4;
            this.textBoxDD.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // textBoxName
            // 
            this.textBoxName.Location = new System.Drawing.Point(73, 31);
            this.textBoxName.Name = "textBoxName";
            this.textBoxName.Size = new System.Drawing.Size(211, 23);
            this.textBoxName.TabIndex = 4;
            this.textBoxName.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // showplanBtn
            // 
            this.showplanBtn.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.showplanBtn.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.showplanBtn.Location = new System.Drawing.Point(148, 136);
            this.showplanBtn.Name = "showplanBtn";
            this.showplanBtn.Size = new System.Drawing.Size(97, 23);
            this.showplanBtn.TabIndex = 3;
            this.showplanBtn.Text = "SHOW PLAN";
            this.showplanBtn.UseVisualStyleBackColor = false;
            this.showplanBtn.Click += new System.EventHandler(this.showplanBtn_Click);
            // 
            // addplanBtn
            // 
            this.addplanBtn.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.addplanBtn.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.addplanBtn.Location = new System.Drawing.Point(25, 136);
            this.addplanBtn.Name = "addplanBtn";
            this.addplanBtn.Size = new System.Drawing.Size(97, 23);
            this.addplanBtn.TabIndex = 2;
            this.addplanBtn.Text = "ADD PLAN";
            this.addplanBtn.UseVisualStyleBackColor = false;
            this.addplanBtn.Click += new System.EventHandler(this.addplanBtn_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(10)))), ((int)(((byte)(20)))), ((int)(((byte)(40)))));
            this.ClientSize = new System.Drawing.Size(901, 639);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.labelClk);
            this.Controls.Add(this.labelDate);
            this.Controls.Add(this.groupBoxControl);
            this.Name = "Form1";
            this.Text = "DIGITAL CLOCK - GROUP 3";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.Resize += new System.EventHandler(this.Form1_Resize);
            this.groupBoxControl.ResumeLayout(false);
            this.groupBoxControl.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.GroupBox groupBoxControl;
        private System.Windows.Forms.Label labelStatus;
        private System.Windows.Forms.Button closeBtn;
        private System.Windows.Forms.Button openBtn;
        private System.Windows.Forms.ComboBox comboBoxPorts;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button updateTimeBtn;
        private System.Windows.Forms.Label labelDate;
        private System.Windows.Forms.Label labelClk;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button showplanBtn;
        private System.Windows.Forms.Button addplanBtn;
        private System.Windows.Forms.TextBox textBoxName;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBoxMin;
        private System.Windows.Forms.TextBox textBoxHH;
        private System.Windows.Forms.TextBox textBoxYYYY;
        private System.Windows.Forms.TextBox textBoxMM;
        private System.Windows.Forms.TextBox textBoxDD;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label labelFileStatus;
        private System.Windows.Forms.Button clrBtn;
    }
}

