https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/1
void sortByFreq(int arr[],int n)
{
    //Your code here
    
    map<int, int> hash;
    
    for(int i =0; i<n; i++) {
    	hash[arr[i]]++;
	}
    
    for(int i =0; i<n-1; i++) {
    	for(int j =i+1; j<n; j++) {
    	    
    	    if(hash[arr[i]] < hash[arr[j]]) {
    	    	int temp = arr[i];
    			arr[i] = arr[j];
    			arr[j] = temp;
			}
    		else if(hash[arr[i]] == hash[arr[j]]) {
	    		if(arr[i] > arr[j]) {
	    			int temp = arr[i];
	    			arr[i] = arr[j];
	    			arr[j] = temp;
				}
			}
		}
	}
    
    for(int i =0; i<n; i++) {
    	cout << arr[i] << " ";
	}
    
    
}