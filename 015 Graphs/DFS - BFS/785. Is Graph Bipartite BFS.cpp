class Solution {
public:
    bool bfs(int start,vector<vector<int>>adj,vector<int> &color){
        queue<int> pending;
        pending.push(start);
        color[start]=1;
        while(pending.size()!=0){
            int node=pending.front();
            pending.pop();
            
            for(auto it:adj[node]){
                if(color[it]==-1){
                    pending.push(it);
                    color[it]=!color[node];
                }else if(color[it]==color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        
        int V=adj.size();
        
        vector<int> color(V+1,-1);
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(bfs(i,adj,color)==false) return false;
	        }
	    }
	    return true;
    }
};
