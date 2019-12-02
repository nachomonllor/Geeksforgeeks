https://practice.geeksforgeeks.org/problems/print-diagonally/0
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
   
    int T ;
    scanf("%d", &T);
 
    while(T--) {
       
        int N;
        scanf("%d", &N);
       
        int matriz[N][N];
        int index = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int elem;
                scanf("%d", &elem);
                matriz[i][j] = elem; //arr[index++];
            }
        }
       
        int fila = 0, col = 0;
        for (int j = 0; j < N; j++) {
            fila = 0;
            col = j;
            while (fila < N && col >= 0) {
                printf("%d ",matriz[fila][col]); //Console.Write(matriz[fila, col] + " ");
                fila++;
                col--;
            }
        }
        fila = 1;
        col = N - 1;
        for (int i = 1; i < N; i++){
            fila = i;
            col = N - 1;
            while (fila < N && col >= 0){
                //Console.Write(matriz[fila, col] + " ");
                printf("%d ", matriz[fila][col]);
                fila++;
                col--;
            }
        }
       
        printf("\n");
       
    }
   
    system("pause");
   
    return 0;  
}
