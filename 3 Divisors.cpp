http://www.practice.geeksforgeeks.org/problem-page.php?pid=1377
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
 
#define ll long long int
 
using namespace std;
 
bool esPrimo(long n) {
   
   if(n < 2) return false;
   if(n == 2) return true;
   if(n %2==0) return false;
   
   ll sqr =  (ll)sqrt(n);
   
   for(ll i =3; i<=sqr; i+=2) {
       if(n %i==0) {
           return false;
       }
   }
   return true;
}
 
 
 
int main() {
 
  int t;
  scanf("%d", &t);
 
    std::vector<ll> cuadrados;
    for(long i =1; i<32000; i++) {
        if(esPrimo(i)) {
            cuadrados.push_back(i * i);
        }
    }
 
  while(t--) {
      ll n;
      cin >> n;
     
        if (n < 4)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = 1; i < cuadrados.size(); i++)
            {
                if (n >= cuadrados[i-1] && n < cuadrados[i])
                {
                    cout <<  i  << endl;
                    break;
                }
            }
        }
  }  
   
 return 0;  
}
