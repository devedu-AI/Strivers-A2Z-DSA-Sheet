class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[i]=nums[i];
        }
        int count=0;
        int i=0;
        while(count<map.size()){
            if(map[count++]!=0){
                nums[i++]=map[count-1];
            }
        }
        for(int j=i;j<n;j++) nums[j]=0;
    }
};
