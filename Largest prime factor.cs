https://practice.geeksforgeeks.org/problems/largest-prime-factor/0

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {


        static bool isPrime(int num)
        {
            if (num == 2 || num == 3)
                return true;

            if (num % 6 != 1 && num % 6 != 5)
                return false;
            int tmp = (int)Math.Sqrt(num);

            for (int i = 5; i <= tmp; i += 6)
                if (num % i == 0 || num % (i + 2) == 0)
                    return false;

            return true;
        }


        static List<int> divisores(int n)
        {
            List<int> div = new List<int>();
            for (int i = 1; i <= Math.Sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    div.Add(i);
                    if (n / i != i)
                    {
                        div.Add(n / i);
                    }
                }

            }
            div.Sort();
            return div;
        }

        static void Main(string[] args)
        {

            int t = int.Parse(Console.ReadLine().Trim());


            while (t-- > 0)
            {
                int n = int.Parse(Console.ReadLine().Trim());

                List<int> div = divisores(n);



                for (int i = div.Count - 1; i >= 0; i--)
                {
                    if (isPrime(div[i]))
                    {
                        Console.WriteLine(div[i]);
                        break;
                    }

                }

            }
            //Console.WriteLine(div.Last());


            Console.ReadLine();
        }
    }
}
