class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max1 = INT_MIN;
	    for(int i=0;i<n;i++){
	        if(max1<arr[i]){
	            max1=arr[i];
	        }
	    }
	    int max2 = INT_MIN;
	    for(int i=0;i<n;i++){
	        if(max2<arr[i] && arr[i]!=max1){
	            max2=arr[i];
	        }
	    }
	    if(max2==INT_MIN) return -1;
	    return max2;
	}
};
