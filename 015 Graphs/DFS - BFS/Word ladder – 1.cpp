class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        
        unordered_map<string,int> mp;
        for(auto it:wordList) mp[it]++;
        mp.erase(startWord);
        queue<pair<string,int>> pending;
        pending.push({startWord,1});
        
        while(pending.size()!=0){
            string tempWord = pending.front().first;
            int len = pending.front().second;
            pending.pop();
            
            if(tempWord==targetWord) return len;
            
            for(int i=0;i<tempWord.size();i++){
                char ori = tempWord[i];
                
                for(char kk ='a';kk<='z';kk++){
                    if(ori!=kk){
                        tempWord[i]=kk;
                        if(mp.count(tempWord)>=1){
                            mp.erase(tempWord);
                            pending.push({tempWord,len+1});
                        }
                    }
                }
                tempWord[i]=ori;
                
            }
            
        }
        
        return 0;
    }
};
