class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        
        vector<pair<int,int>> ans;
        
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        
        for(int i=0;i<N;i++) map1[A[i]]++;
        for(int i=0;i<M;i++) map2[B[i]]++;
        
        for(auto i:map1){
            if(map2.count(X-i.first)>=1){
                ans.push_back({i.first,X-i.first});
                map2[X-i.first]--;
                map1[i.first]--;
            }
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};
