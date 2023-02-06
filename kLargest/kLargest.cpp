// kLargest.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
int arr[6] = { 10, 2, 4, 8, 6, 9 };

// defining priority queue
priority_queue<int> pq;

// printing array
cout << "Array: ";
for (auto i : arr) {
	cout << i << ' ';
}
cout << endl;
// pushing array sequentially one by one
for (int i = 0; i < 6; i++) {
	pq.push(arr[i]);
}

// printing priority queue
cout << "Priority Queue: ";
while (!pq.empty()) {
	cout << pq.top() << ' ';
	pq.pop();
}

*/

vector<int> kLargest(int arr[], int n, int k) {


	priority_queue<int> pq;

	for (int i = 0; i < n; i++) {
		pq.push(arr[i]);
	}

	int cont_k = 0;
	vector<int> ans;

	while (!pq.empty() && cont_k < k) {
		ans.push_back(pq.top());
		pq.pop();
		cont_k++;
	}

	return ans;
}


int main()
{
	//N = 5, K = 2
	int arr[] = { 12, 5, 787, 1, 23 };
	//Output: 787 23
	int n = 5, k = 2;
	vector<int> v = kLargest(arr, n, k);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}

