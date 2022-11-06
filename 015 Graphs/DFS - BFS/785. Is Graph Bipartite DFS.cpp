class Solution {
public:
    bool dfs(int start,vector<vector<int>>adj,vector<int> &color,int col){
        color[start]=col;
        for(auto it:adj[start]){
            if(color[it]==-1){
                if(dfs(it,adj,color,!col)==false){
                    return false;
                }
            }else if(color[it]==col){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        
        int V=adj.size();
        
        vector<int> color(V+1,-1);
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(dfs(i,adj,color,0)==false) return false;
	        }
	    }
	    return true;
    }
};
