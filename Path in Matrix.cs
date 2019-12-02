https://practice.geeksforgeeks.org/problems/path-in-matrix/0
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApp1
{
    public class GFG
    {
        static  int Max(int x, int y, int z)
        {
            return new int[] { x, y, z }.Max();
        }

        static int calcularMax(int[,] cost, int N)
        {
            int[,] tc = new int[N, N];

            for (int i = 0; i < N; i++) //cargo primera fila
            {
                tc[0, i] = cost[0, i];
            }

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    //tc[i, j] = Max(tc[i - 1, j - 1],
                    //               tc[i - 1, j],
                    //               tc[i - 1, j + 1]) + cost[i, j];
                    int a = 0, b = 0, c = 0;
                    if (i - 1 >= 0 && j - 1 >= 0)
                    {
                        a = tc[i - 1, j - 1];
                    }
                    if (i - 1 >= 0)
                    {
                        b = tc[i - 1, j];
                    }
                    if (i - 1 >= 0 && j + 1 < N)
                    {
                        c = tc[i - 1, j + 1];
                    }

                    tc[i, j] = Max(a, b, c) + cost[i, j];
                }
            }

            int max = 0;
            for (int col = 0; col < N; col++)
            {
                max = Math.Max(max, tc[N - 1, col]);
            }

            //Console.WriteLine(max);
            return max;

        }

        static public void Main()
        {

            int T = int.Parse(Console.ReadLine());

            while(T -- > 0)
            {
                int N = int.Parse(Console.ReadLine());

                int[] arr = Array.ConvertAll(Console.ReadLine().Trim().Split(' '), e => int.Parse(e));

                int[,] mat = new int[N, N];

                int indice = 0;
                for(int i =0; i<N; i++)
                {
                    for(int j =0; j<N; j++)
                    {
                        mat[i, j] = arr[indice];
                        indice++;
                    }
                }

                Console.WriteLine(calcularMax(mat, N));
            }

           

            Console.ReadLine();
        }
    }
}



