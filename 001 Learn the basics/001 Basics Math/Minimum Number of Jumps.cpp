class Solution {
public:
    bool canJump(vector<int>& a) {
        
    int n=a.size();
    if(n<2) return true;
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++) dp[i]=-1;
    int i=0, j=1;
    for(; i<n;i++){
        if(dp[i]==-1)
            return false;
        while(j<n && j<=a[i]+i){
                dp[j] = dp[i]+1;
                j++;
        }
    }
    return true;
    }
};