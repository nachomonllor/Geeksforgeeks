http://www.practice.geeksforgeeks.org/problem-page.php?pid=119
#include <iostream>
#include <stdio.h>
#include <vector>
 
//#include <conio.h>
 
using namespace std;
std::vector<int> maxSubArray(std::vector<int> A) //complejidad O(n)
{
    std::vector<int> max_sub;
    int maxSum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        std::vector<int> actual;
        int thisSum = 0;
        for (int j = i; j < A.size(); j++)
        {
            if (A[j] < 0) break;
           
            actual.push_back(A[j]);
            thisSum += A[j];
            if (thisSum >= maxSum)
            {
                maxSum = thisSum;
                //max_sub = actual;
                max_sub = std::vector<int>();
                for (int k = 0; k < actual.size(); k++)
                {
                    max_sub.push_back(actual[k]);
                }
            }
        }
    }
   
    return max_sub ;
}
 
int main() {
   
 int t;
 scanf("%d", &t);
 
    while(t--) {
       
        int N;
        scanf("%d", &N);
       
        std::vector<int> arr(N);
        for(int i =0; i < N; i++) {
            scanf("%d", &arr[i]);  
        }
       
        std::vector<int> res = maxSubArray(arr);
       
        for(int i =0; i < res.size(); i++) {
            printf("%d ", res[i]);  
        }
       
        printf("\n");
         
    }
 
   
    //getch();
 return 0;
   
}
