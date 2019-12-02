http://www.practice.geeksforgeeks.org/problem-page.php?pid=583
#include <iostream>
#include <stdio.h>
#include <vector>
 
using namespace std;
 
int main() {
   
    int t;
    scanf("%d", &t);
   
    while(t--) {
      int n;
      scanf("%d", &n);  
       std::vector<int> v;
       for(int i =0; i<n; i++) {
          int elem;
          scanf("%d", &elem   );
          v.push_back(elem);
        }
       
       
        std::vector<int> ans;
        for (int i = 0; i < n; i++) {
            int j = i - 1;
            while (j >= 0) {
                if (v[j] < v[i]) {
                    ans.push_back(v[j]);
                    break;
                }
                j--;
            }
            if (j < 0){
                ans.push_back(-1);
            }
   
        }
   
        for(int i =0; i < ans.size(); i++) {
            printf("%d ", ans[i]);  
        }
       
        printf("\n");
       
    }
   
 return 0;  
}
