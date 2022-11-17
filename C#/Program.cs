using System;

namespace csproj// Note: actual namespace depends on the project name.
{
    class Program
    {
        static void Main(string[] args)
        {
            string name;
            Console.Write("Enter your name : ");
            name = Console.ReadLine();
            Console.Write("Your name is "+name);
        }
    }
}