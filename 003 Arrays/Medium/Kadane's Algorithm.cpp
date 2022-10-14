    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=-1;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(sum<0){
                sum=0;
            }
            sum+=arr[i];
            if(sum>max){
                max=sum;
            }
        }
        return max;
        
    }
};
