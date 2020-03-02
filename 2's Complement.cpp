http://www.practice.geeksforgeeks.org/problem-page.php?pid=250
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int toDec(int k, std::string n) {
    int result =0;
        int power = 1;
    for(int i = (int)n.size()-1; i>=0; i--) {
        result += int(n[i] - '0') * power;
        power *=k;
    }
    return result;
}
 
std::string toBin(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
 
int main() {
   
    int t;
    scanf("%d", &t);
   
    while(t--) {
        std::string s;
        cin >> s;
       
        std::string comp1 = "";
        for(int i =0; i < s.size(); i++) {
           if(s[i] == '1') {
              comp1 +='0';  
           } else {
              comp1 += '1';  
           }  
        }
       
        int dec = toDec(2, comp1);
        dec++;
        std::string ans = "";
        ans = toBin(dec);
       
        std::string ansCeros = "";
        int ceros = s.size() - ans.size();
        //if(ceros > 0) {
           for(int i =0; i < ceros; i++) {  
              ansCeros += '0';
           }
           ansCeros += ans;
        //}
       
        cout << ansCeros << endl;
        //cout << ans << endl;
        //printf("%d", dec );
       
    }
 
 
   return 0;
}

