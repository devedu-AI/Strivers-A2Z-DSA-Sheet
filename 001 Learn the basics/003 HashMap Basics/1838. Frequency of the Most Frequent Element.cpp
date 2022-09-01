class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long int total=0;
        long int ans = 0;
        long int l=0,r=0;
        while(r<nums.size()){
            total+=nums[r];
            while(nums[r]*(r-l+1)>total+k){
                total-=nums[l];
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return (int)ans;
    }
};
