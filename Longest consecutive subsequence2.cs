http://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence/1
class GfG
{
    int findLongestConseqSubseq(int a[], int n)
    {
	// Your code here
	    int max =  0;
        for(int i =0; i<n; i++) {
            max = Math.max(max, a[i]);
        }
        
        int[] cont = new int[max+1];
        
        for(int i =0; i<a.length; i++) {
            cont[a[i]]++;
        }
        
        int max_consec =0;
        int consec =0;
        for(int i =0; i<cont.length; i++) {
            if(cont[i] !=0) {
                consec++;
            }else{
                max_consec = Math.max(max_consec, consec);
                consec =0;
            }
        }
        if(consec > 0) {
            max_consec = Math.max(max_consec, consec);
        }
        
        
        return max_consec;
	
    }
}

