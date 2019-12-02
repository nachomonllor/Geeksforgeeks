http://www.practice.geeksforgeeks.org/problem-page.php?pid=108


#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <map>
 
//#include <conio.h>
 
using namespace std;
 
int main() {
   
    int t;
    scanf("%d", &t);
   
    while(t--) {
       
        int N;
        scanf("%d", &N);
       
        std::vector<int> arr;
        for(int i =0; i < N; i++) {
            int elem ;
            scanf("%d", &elem);
            arr.push_back(elem);
        }
       
 
        map<int,int> diccio;
       
       
        int max = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            //sorted.insert(arr[i]);
            max = std::max(max, arr[i]);
            diccio[arr[i]]++;
        }
       
        for(std::map<int,int>::iterator it=diccio.begin(); it != diccio.end(); it++) {
           if(it->second==2) {
                printf("%d ", it->first);
                break;
            }      
        }
 
 
        bool  marcas[max+1];
       
        for(int i =0; i < max + 1; i++) {
            marcas[i]=false;  
        }
 
        for(int i =0; i < N; i++) {
            marcas[arr[i]]= true;  
        }
       
 
        for (int i = 1; i < max  + 1; i++)
        {
            if (!marcas[i])
            {
                printf("%d\n",i);
                break;
            }
        }
 
 
 
       
    }
   
    //getch();
   
    return 0;
}
