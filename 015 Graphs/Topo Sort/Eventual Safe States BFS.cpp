class Solution {
  public:
    vector<int> ans;
	void bfs(int V,vector<int> adj[],vector<int> inDegree){
	    queue<int> pending;
	    
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
	}
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int> in(V,0);
        vector<int> adjRev[V];
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                adjRev[it].push_back(i);
                in[i]++;
            }
        }
        bfs(V,adjRev,in);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
