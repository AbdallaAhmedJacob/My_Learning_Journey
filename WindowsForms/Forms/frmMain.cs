using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using WindowsForms.Forms;

namespace WindowsForms
{
    public partial class frmMain : Form
    {
        public frmMain()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form frm1 = new Form();

            Button btn1 = new Button();
            btn1.Size = new Size(150, 50);
            btn1.Location = new Point(100, 100);
            btn1.Text = "Show Dialog Form...";
            btn1.Click += new EventHandler(btn1_Click);

            frm1.Show();

            frm1.Controls.Add(btn1);
        }

        private void btn1_Click(object sender, EventArgs e)
        {
            Form frmDailog = new Form();

            Label label1 = new Label();
            label1.Size = new Size(255, 255);
            label1.Location = new Point(100, 100);
            label1.Text = "Hi, this is Dailog form :)";

            frmDailog.Controls.Add(label1);
            
            frmDailog.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Form frm = new frmMessageBox();

            frm.ShowDialog();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Form frmLabel = new frmLable();

            frmLabel.ShowDialog();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Form frmButton = new frmButton();

            frmButton.ShowDialog();
        }
    }
}
