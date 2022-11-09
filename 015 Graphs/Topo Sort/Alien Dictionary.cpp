class Solution{
    public:
	vector<int> bfs(int V,vector<int> adj[]){
	    
	    vector<int> inDegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                inDegree[it]++;
            }
        }
	    
	    queue<int> pending;
	    vector<int> ans;
	    
	    for(int i=0;i<V;i++) if(inDegree[i]==0) pending.push(i);
	    
	    while(pending.size()!=0){
	        int node = pending.front();
	        pending.pop();
	        ans.push_back(node);
	        for(auto it:adj[node]){
	            inDegree[it]--;
	            if(inDegree[it]==0) pending.push(it);
	        }
	    }
	    
	    return ans;
	}
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int> adj[K];
        
        for(int i=0;i<N-1;i++){
            string s1 = dict[i];
            string s2 = dict[i+1];
            int mn = min(s1.length(),s2.length());
            for(int kk=0;kk<mn;kk++){
                if(s1[kk]!=s2[kk]){
                    adj[s1[kk]-'a'].push_back(s2[kk]-'a');
                    break;
                }
            }
            
        }
	    vector<int> ans = bfs(K,adj);
	    
	    string st;
	    for(auto it:ans){
	        st=st+(char)(it+'a');
	    }
	    
	    return st;
        
        
    }
};
