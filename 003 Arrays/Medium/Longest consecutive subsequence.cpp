class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      
      int cnt=1;
      int ans=INT_MIN;
      map<int,int> map;
      for(int i=0;i<N;i++) map[arr[i]]++;
      
      for(auto i:map){
          if(map.count(i.first+1)>=1) cnt++;
          else{
              ans=max(ans,cnt);
              cnt=1;
          }
      }
      
      return ans;
    }
};
