http://www.practice.geeksforgeeks.org/problem-page.php?pid=392
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
    //code
   
    int t;
    scanf("%d", &t);
   
    while(t--) {
        std::string s;
        cin >> s;
 
        int max_len = 0;
        string longest = "";
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = s.size()-1; j >=i ; j--)
            {
                string subs = s.substr(i, j - i + 1);
                std::string rev = subs;
                std::reverse(rev.begin(), rev.end());
                if (subs == rev )
                {
                    if (subs.size() > max_len)
                    {
                        max_len = subs.size();
                        longest = subs;
                    }
                }
                if (subs.size() <= max_len)
                {
                    break;
                }
            }
        }
        cout << longest << endl;
 
    }
   
    return 0;
}
