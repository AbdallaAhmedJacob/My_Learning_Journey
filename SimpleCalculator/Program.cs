using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimpleCalculator
{
    public class Calculator
    {
        private enum _enProcessType {Add = 0, Substract = 1, Divid = 2, Multiplacation = 3 }
        private string[] _arrProcessType = { "Adding", "Substracting", "Dividing", "Multiplacationing" };

        private int _oldValue { get; set; } = 0;
        private int _newValue { get; set; } = 0;
        private string _ProcessType { get; set; } = "";

        public void Add(int n)
        {
            _newValue = n;
            _ProcessType = _arrProcessType[(int)_enProcessType.Add];
            _oldValue += n;
        }
        public void Substract(int n) 
        {
            _newValue = n;
            _ProcessType = _arrProcessType[(int)_enProcessType.Substract];
            _oldValue -= n;
        }
        public void Divid(int n)
        {
            _newValue = n;
            _ProcessType = _arrProcessType[(int)_enProcessType.Substract];
            if (n < 1) n = 1;
            _oldValue /= n;
        }
        public void Multiplacation(int n)
        {
            _newValue = n;
            _ProcessType = _arrProcessType[(int)_enProcessType.Substract];
            _oldValue *= n;
        }

        public void PrintResult()
        {
            if (_ProcessType == "")
            {
                Console.WriteLine(0);
                return;
            }

            Console.WriteLine("Result After {0} {1} is : {2}", _ProcessType, _newValue, _oldValue);
        }
        public void Clear()
        {
            _oldValue = 0;
            _newValue = 0;
            _ProcessType = "";
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Calculator calculator1 = new Calculator();

            calculator1.Clear();

            calculator1.Add(10);
            calculator1.PrintResult();

            calculator1.Add(100);
            calculator1.PrintResult();

            calculator1.Substract(20);
            calculator1.PrintResult();

            calculator1.Divid(0);
            calculator1.PrintResult();
            
            calculator1.Divid(2);
            calculator1.PrintResult();

            calculator1.Multiplacation(3);
            calculator1.PrintResult();

            calculator1.Clear();
            calculator1.PrintResult();
        }
    }
}
