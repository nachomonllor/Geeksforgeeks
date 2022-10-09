//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0/?ref=self
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {

        static int maxSubArraySum(int[] a, int size)
        {
            int max_so_far = a[0];
            int curr_max = a[0];

            for (int i = 1; i < size; i++)
            {
                curr_max = Math.Max(a[i], curr_max + a[i]);
                max_so_far = Math.Max(max_so_far, curr_max);
            }

            return max_so_far;
        }

        // Drive code  
        public static void Main()
        {
            int t = int.Parse(Console.ReadLine());
            while(t-- > 0)
            {
                int n = int.Parse(Console.ReadLine().Trim());
                int[] A = Array.ConvertAll(Console.ReadLine().Trim().Split(' '), e => int.Parse(e));
                Console.WriteLine(maxSubArraySum(A, n));
            }
            Console.ReadLine();
        }


    }
}
