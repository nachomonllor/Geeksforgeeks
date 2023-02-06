using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace trappingWater
{
    class Program
    {
        public long trappingWater(int[] arr, int n)
        {
            int[] izq = new int[n];
            izq[0] = arr[0];

            for (int i = 1; i < n; i++)
            {
                izq[i] = Math.Max(izq[i-1], arr[i]);
            }

            int[] der = new int[n];
            der[n-1] = arr[n-1];

            for (int i = n-2; i>=0; i--)
            {
                der[i] = Math.Max(der[i+1], arr[i]);
            }

            long cant_agua = 0;

            for (int i = 0; i < n; i++)
            {
                cant_agua += (Math.Min(izq[i], der[i]) - arr[i]);
            }


            return cant_agua;
        }
        static void Main(string[] args)
        {


            Console.ReadLine();
        }
    }
}
