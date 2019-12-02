http://www.practice.geeksforgeeks.org/problem-page.php?pid=434
#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
 
using namespace std;
 
int main() {
   
    int t;
    scanf("%d", &t);
   
    while(t--) {
     
        int M,N;
        scanf("%d %d", &M, &N);
       
        std::vector<int> a;
        for(int i =0; i < M; i++) {
            //scanf("%d", &a[i]);
            int elem;
            scanf("%d", &elem);
            a.push_back(elem);
        }
       
        std::vector<int> b;
        for(int i =0; i < N; i++) {
          //scanf("%d", &b[i]);  
          int elem;
          scanf("%d",&elem);
          b.push_back(elem);
        }
         
        std::map<int, int> diccio;
        for (int i = 0; i < M; i++)
        {
            diccio[a[i]]++;    
        }
 
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < diccio[b[i]]; j++)
            {
                //Console.Write(b[i] + " ");
                printf("%d ", b[i]);
            }
        }
 
        std::vector<int> resto;
 
        for (int i = 0; i < M; i++)
        {
            /*if (!b.Contains(a[i]))
            {
                resto.Add(a[i]);
            }*/
           
            if(std::find(b.begin(), b.end(), a[i]) != b.end()) {
                /* v contains x */
            } else {
                /* v does not contain x */
                resto.push_back(a[i]);
            }
           
        }
 
        std::sort(resto.begin(), resto.end());
 
        for(int i =0; i< resto.size(); i++) {
            printf("%d ", resto[i]);  
        }
       
       
        printf("\n");
       
    }
   
 return 0;  
}

