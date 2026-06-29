using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsForms
{
    public partial class frmMessageBox : Form
    {
        public frmMessageBox()
        {
            InitializeComponent();
        }

        private void btnShowMessageBox_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hi this is a message.");
        }

        private void btnShowMessageBoxWithTitle_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hi this is a message.", "Thos is a title : Wow");
        }

        private void btnShowMessageBoxWithTitleAndButtons_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Hi this is a message.", "This is a title : Wow",
                MessageBoxButtons.OK) == DialogResult.OK)
            {
                if (MessageBox.Show("Hi this is a message box with buttons Yes and No.", "This is a title : Wow",
                    MessageBoxButtons.YesNo) == DialogResult.Yes)
                {
                    if (MessageBox.Show("Hi this is a message box with buttons Ok and Cancel.", "This is a title : Wow",
                        MessageBoxButtons.OKCancel) == DialogResult.OK)
                    {
                        if (MessageBox.Show("Hi this is a message box with buttons Yes, No and Cancel.", "This is a title : Wow",
                                MessageBoxButtons.YesNoCancel) == DialogResult.Yes)
                        {
                            if (MessageBox.Show("Hi this is a message box with buttons Retry and Cancel.", "This is a title : Wow",
                                MessageBoxButtons.RetryCancel) == DialogResult.Retry)
                            {
                                if (MessageBox.Show("Hi this is a message box with buttons Abort Retry and Ignore.", "This is a title : Wow",
                                    MessageBoxButtons.AbortRetryIgnore) == DialogResult.Retry) 
                                {
                                    MessageBox.Show("The End");
                                }
                            }
                        }
                    }
                }
            }
        }

        private void btnShowMessageBoxWithTitleButtonsAndIcon_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hi this is a message box with astrerisk icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);
            MessageBox.Show("Hi this is a message box with Error icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.Error);
            MessageBox.Show("Hi this is a message box with Exclamation icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
            MessageBox.Show("Hi this is a message box with Hand icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.Hand);
            MessageBox.Show("Hi this is a message box with Information icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.Information);
            MessageBox.Show("Hi this is a message box with Question icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.Question);
            MessageBox.Show("Hi this is a message box with Stop icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.Stop);
            MessageBox.Show("Hi this is a message box with Warning icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            MessageBox.Show("Hi this is a message box with None icon.", "Thos is a title : Wow", MessageBoxButtons.OK, MessageBoxIcon.None);
            
        }

        private void btnShowMessageBoxWithTitleAndDevoltButtons_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hi this is a message box with devolt button 3.", "Thos is a title : Wow", MessageBoxButtons.AbortRetryIgnore, MessageBoxIcon.None, MessageBoxDefaultButton.Button3);
        }
    }
}
