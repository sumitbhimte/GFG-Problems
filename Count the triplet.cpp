// https://practice.geeksforgeeks.org/problems/count-the-triplets/0


Class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int count =0;
	    sort(arr, arr + n);
	    for(int i=0;i<n-1;i++){
	        
	        for(int k=i+1;k<n-1;k++){
	            int sum = arr[i]+arr[k];
	            if(binary_search(arr, arr + n, sum))
	                count++;
	            }
	     }
	    return count;
	}	
};
