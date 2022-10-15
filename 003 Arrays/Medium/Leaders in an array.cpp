class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        int temp = a[n-1];
        ans.push_back(temp);
        for(int i=n-2;i>=0;i--){
            if(temp<=a[i]){
                ans.push_back(a[i]);
                temp=a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};
