using System;
using System.Threading;

namespace CSharpTestApp
{
    public class Program
    {
        public static void Main(string[] args)
        {
            //Console.ReadLine();
            Console.WriteLine("Start");
            TestCli();
            //TestCsharp();
            Console.WriteLine("End");
            Console.ReadLine();
        }


        public static void TestCli()
        {
            var x = new mtsetbridge();
            x.dothestuff();
        }

        public static void TestCsharp()
        {
            var x = Factory.Create();
            x.DoStuff();
        }
    }

    class LongRunningClass
    {
        ~LongRunningClass()
        {
            Console.WriteLine("~LongRunningClass");
        }

        public void DoStuff()
        {
            Console.WriteLine("DoStuff");

            for (var i = 0; i < 10; i++)
            {
                Console.WriteLine(i);
                GC.Collect();
                Thread.Sleep(100);
            }

            Console.WriteLine("\\DoStuff");
        }
    }

    static class Factory
    {
        public static LongRunningClass Create()
        {
            return new LongRunningClass();
        }
    }
}