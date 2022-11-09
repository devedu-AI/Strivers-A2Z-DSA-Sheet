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
    vector<int> findOrder(int N, vector<vector<int>>& prerequisites) {
        vector<int> adj[N];
	    vector<int> in(N,0);
	    for(auto it:prerequisites){
	        adj[it[1]].push_back(it[0]);
	    }
	    for(int i=0;i<N;i++){
	        for(auto it:adj[i]) in[it]++;
	    }
	    bfs(N,adj,in);
	    vector<int> topo;
	    if(ans.size()==N) return ans;
        return topo;
    }
};
