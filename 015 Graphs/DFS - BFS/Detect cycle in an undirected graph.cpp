class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(int node,int parent,vector<int> adj[],vector<bool> &vis){
        vis[node]=true;
        for(auto i:adj[node]){
            if(!vis[i]){
                vis[i]=true;
                if(dfs(i,node,adj,vis)==true){
                    return true;
                }
            }else if(i!=parent){
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        vector<bool> vis(V,false);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,-1,adj,vis)==true) return true;
            }
        }
        
        
        return false;
        
    }
};
