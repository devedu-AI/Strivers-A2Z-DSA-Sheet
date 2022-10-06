class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>nums.size()) k-=nums.size();
        
        vector<int> ans;
        for(int i=0;i<nums.size()-k;i++){
            ans.push_back(nums[i]);
        }
        
        for(int i=0;i<k;i++){
            nums[i]=nums[i+nums.size()-k];
        }
        
        int j=0;
        for(int i=k;i<nums.size();i++){
            nums[i]=ans[j++];
        }
        
    }
};
