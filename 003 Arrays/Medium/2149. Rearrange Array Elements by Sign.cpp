class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> pos;
        queue<int> neg;
        
        for(auto i:nums){
            if(i<1) neg.push(i);
            else pos.push(i);
        }
        
        vector<int> ans;
        while(pos.size()!=0 && neg.size()!=0){
            ans.push_back(pos.front()); pos.pop();
            ans.push_back(neg.front()); neg.pop();
        }
        return ans;
    }
};
