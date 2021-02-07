using System;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
    }

    public class UnitConverter
    {
        int radio;

        public UnitConverter(int unitRatio)
        {
            radio = unitRatio;
        }

        public int Convert(int unit)
        {
            return unit * radio;
        }
    }
}
