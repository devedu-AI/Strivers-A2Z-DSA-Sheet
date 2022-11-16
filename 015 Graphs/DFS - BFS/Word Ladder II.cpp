class Solution {
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        // code here
        vector<vector<string>> ans;
        queue<vector<string>> q;
        unordered_map<string,int> mp;
        for(auto it:wordList) mp[it]++;
        vector<string> usedLevel;
        q.push({beginWord});
        int lvl = 0;
        usedLevel.push_back(beginWord);
        while(q.size()!=0){
            vector<string> vec = q.front();
            q.pop();
            if(vec.size()>lvl){
                lvl++;
                for(auto it:usedLevel){
                    mp.erase(it);
                }
                usedLevel.clear();
            }
            
            string word = vec.back();
            
            if(word==endWord){
                if(ans.size()==0){
                    ans.push_back(vec);
                }else if(ans[0].size()==vec.size()){
                    ans.push_back(vec);
                }
            }
            
            for(int i=0;i<word.length();i++){
                char ori = word[i];
                for(char ch='a';ch<='z';ch++){
                    word[i]=ch;
                    if(mp.count(word)>=1){
                        vec.push_back(word);
                        q.push(vec);
                        usedLevel.push_back(word);
                        vec.pop_back();
                    }
                }
                word[i]=ori;
            }
            
        }
        return ans;
    }
};
