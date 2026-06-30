using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsForms.Forms
{
    public partial class frmLable : Form
    {
        public frmLable()
        {
            InitializeComponent();
        }

        private void frmLable_Load(object sender, EventArgs e)
        {
            // Properties lable1.
            label1.Text = "Programming Advices";
            label1.ForeColor = Color.Blue;
            label1.Font = new Font("Arial", 18, FontStyle.Bold);
            label1.Cursor = Cursors.Hand;

            // Properties lable12
            label2.Text = "I am label";
            label2.BackColor = Color.Yellow;
            label2.BorderStyle = BorderStyle.FixedSingle;
            label2.TextAlign = ContentAlignment.MiddleCenter;

            // Properties lable1.
            label3.Text = "Welcom to WinForms";
            label3.Visible = false;
        }

        private void label1_Click(object sender, EventArgs e)
        {
            label3.Visible = true;
        }
    }
}
