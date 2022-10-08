class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int> map;
        int sum=0;
        int maxi=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K) maxi=max(maxi,i+1);
            if(map.find(sum-K)!=map.end()){
                maxi=max(maxi,i-map[sum-K]);
            }
            if(map.find(sum)==map.end()) map[sum]=i;
        }
        return maxi;
        
    } 

};
