http://www.practice.geeksforgeeks.org/problem-page.php?pid=579

#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
   
 int t;
 scanf("%d", &t);
 
 while(t--) {
   
    std::string str;
    cin >> str;
   
    int max_len = 0;
    for (int i = 0; i < str.length(); i++) {
        string actual = "";
        for (int j = i; j < str.length(); j++){
            /*if (!actual.Contains(str[j])){
                actual += str[j];
            }
            else{
                break;
            }*/
           
            int found = actual.find(str[j]);
            if (found!=std::string::npos) {
                //std::cout << "first 'needle' found at: " << found << '\n';
               
                break;
            }else {
                 
                 actual+=str[j];
            }
           
        }
        if (actual.length() > max_len) {
            max_len = actual.length();
        }
    }
 
    printf("%d\n", max_len);
   
 }
   
 return 0;
   
}
