#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
   
    int T ;
    scanf("%d", &T);
       
    while(T -- > 0) {
        int N  ;
        scanf("%d", &N);
        string s;
        cin >> s;
       
        bool marcas[N];
        for(int i =0; i<N; i++)
            marcas[i]=false;
 
        std::vector<char> minusculas;
        std::vector<char> mayusculas;
 
        for (int i = 0; i < N; i++)  {
 
            if(isupper(s[i])) {
                marcas[i] = true;
                mayusculas.push_back(s[i]);
            }
            else if (islower(s[i]))
            {
                //minusculas.add(s.charAt(i));
                minusculas.push_back(s[i]);
            }
        }
 
        std::sort(minusculas.begin(), minusculas.end());
        std::sort(mayusculas.begin(), mayusculas.end());
       
        int iMay = 0, iMin = 0;
        string res = "";
 
        for (int i = 0; i < N; i++)
        {
            if (marcas[i])
            {
                res += mayusculas[iMay]; // [iMay];
                iMay++;
            }
            else
            {
                res += minusculas[iMin];
                iMin++;
            }
        }
 
        cout << res << endl;
    }
   
   
   
 return 0;  
}


