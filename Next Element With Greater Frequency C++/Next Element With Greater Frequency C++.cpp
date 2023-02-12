// Next Element With Greater Frequency C++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <unordered_map>

using namespace std;


vector<int> print_next_greater_freq(int arr[], int n)
{
    unordered_map<int, int> frec;
    vector<int> ans(n, - 1);
    stack<int> pila;

    for (int i = 0; i < n; i++) {
        frec[arr[i]]++;
    }
    for (int i = n - 1; i >= 0; i--) {
        while (!pila.empty() && frec[pila.top()] <= frec[arr[i]]) {
            pila.pop();
        }
        if (!pila.empty()) {
            ans[i]= pila.top();
        }
        pila.push(arr[i]);
    }
    return ans;
}

int main()
{
    /*
    Input:
    n = 10
    arr[] = {5 1 2 3 2 5 5 4 5 2}
    Output:
    -1 2 5 2 5 -1 -1 5 -1 -1
    */


    int arr[] = { 5, 1 ,2 ,3, 2, 5, 5, 4, 5, 2 };
    int n = sizeof(arr) / sizeof(int);

    vector<int> res = print_next_greater_freq(arr, n);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }



    return 0;
}

