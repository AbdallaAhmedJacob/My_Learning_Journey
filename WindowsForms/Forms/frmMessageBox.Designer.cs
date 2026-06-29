namespace WindowsForms
{
    partial class frmMessageBox
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
            this.btnShowMessageBox = new System.Windows.Forms.Button();
            this.btnShowMessageBoxWithTitle = new System.Windows.Forms.Button();
            this.btnShowMessageBoxWithTitleAndButtons = new System.Windows.Forms.Button();
            this.btnShowMessageBoxWithTitleButtonsAndIcon = new System.Windows.Forms.Button();
            this.btnShowMessageBoxWithTitleAndDevoltButtons = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnShowMessageBox
            // 
            this.btnShowMessageBox.Location = new System.Drawing.Point(45, 58);
            this.btnShowMessageBox.Name = "btnShowMessageBox";
            this.btnShowMessageBox.Size = new System.Drawing.Size(150, 100);
            this.btnShowMessageBox.TabIndex = 0;
            this.btnShowMessageBox.Text = "Show Message Box...";
            this.btnShowMessageBox.UseVisualStyleBackColor = true;
            this.btnShowMessageBox.Click += new System.EventHandler(this.btnShowMessageBox_Click);
            // 
            // btnShowMessageBoxWithTitle
            // 
            this.btnShowMessageBoxWithTitle.Location = new System.Drawing.Point(329, 58);
            this.btnShowMessageBoxWithTitle.Name = "btnShowMessageBoxWithTitle";
            this.btnShowMessageBoxWithTitle.Size = new System.Drawing.Size(150, 100);
            this.btnShowMessageBoxWithTitle.TabIndex = 1;
            this.btnShowMessageBoxWithTitle.Text = "Show Message Box With Title...";
            this.btnShowMessageBoxWithTitle.UseVisualStyleBackColor = true;
            this.btnShowMessageBoxWithTitle.Click += new System.EventHandler(this.btnShowMessageBoxWithTitle_Click);
            // 
            // btnShowMessageBoxWithTitleAndButtons
            // 
            this.btnShowMessageBoxWithTitleAndButtons.Location = new System.Drawing.Point(613, 58);
            this.btnShowMessageBoxWithTitleAndButtons.Name = "btnShowMessageBoxWithTitleAndButtons";
            this.btnShowMessageBoxWithTitleAndButtons.Size = new System.Drawing.Size(150, 100);
            this.btnShowMessageBoxWithTitleAndButtons.TabIndex = 2;
            this.btnShowMessageBoxWithTitleAndButtons.Text = "Show Message Box With Title And Buttons...";
            this.btnShowMessageBoxWithTitleAndButtons.UseVisualStyleBackColor = true;
            this.btnShowMessageBoxWithTitleAndButtons.Click += new System.EventHandler(this.btnShowMessageBoxWithTitleAndButtons_Click);
            // 
            // btnShowMessageBoxWithTitleButtonsAndIcon
            // 
            this.btnShowMessageBoxWithTitleButtonsAndIcon.Location = new System.Drawing.Point(179, 218);
            this.btnShowMessageBoxWithTitleButtonsAndIcon.Name = "btnShowMessageBoxWithTitleButtonsAndIcon";
            this.btnShowMessageBoxWithTitleButtonsAndIcon.Size = new System.Drawing.Size(150, 100);
            this.btnShowMessageBoxWithTitleButtonsAndIcon.TabIndex = 3;
            this.btnShowMessageBoxWithTitleButtonsAndIcon.Text = "Show Message Box With Title , Buttons And Icon...";
            this.btnShowMessageBoxWithTitleButtonsAndIcon.UseVisualStyleBackColor = true;
            this.btnShowMessageBoxWithTitleButtonsAndIcon.Click += new System.EventHandler(this.btnShowMessageBoxWithTitleButtonsAndIcon_Click);
            // 
            // btnShowMessageBoxWithTitleAndDevoltButtons
            // 
            this.btnShowMessageBoxWithTitleAndDevoltButtons.Location = new System.Drawing.Point(472, 218);
            this.btnShowMessageBoxWithTitleAndDevoltButtons.Name = "btnShowMessageBoxWithTitleAndDevoltButtons";
            this.btnShowMessageBoxWithTitleAndDevoltButtons.Size = new System.Drawing.Size(150, 100);
            this.btnShowMessageBoxWithTitleAndDevoltButtons.TabIndex = 4;
            this.btnShowMessageBoxWithTitleAndDevoltButtons.Text = "Show Message Box With Title And Devolt Buttons...";
            this.btnShowMessageBoxWithTitleAndDevoltButtons.UseVisualStyleBackColor = true;
            this.btnShowMessageBoxWithTitleAndDevoltButtons.Click += new System.EventHandler(this.btnShowMessageBoxWithTitleAndDevoltButtons_Click);
            // 
            // frmMessageBox
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnShowMessageBoxWithTitleAndDevoltButtons);
            this.Controls.Add(this.btnShowMessageBoxWithTitleButtonsAndIcon);
            this.Controls.Add(this.btnShowMessageBoxWithTitleAndButtons);
            this.Controls.Add(this.btnShowMessageBoxWithTitle);
            this.Controls.Add(this.btnShowMessageBox);
            this.Name = "frmMessageBox";
            this.Text = "frmMessageBox";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnShowMessageBox;
        private System.Windows.Forms.Button btnShowMessageBoxWithTitle;
        private System.Windows.Forms.Button btnShowMessageBoxWithTitleAndButtons;
        private System.Windows.Forms.Button btnShowMessageBoxWithTitleButtonsAndIcon;
        private System.Windows.Forms.Button btnShowMessageBoxWithTitleAndDevoltButtons;
    }
}