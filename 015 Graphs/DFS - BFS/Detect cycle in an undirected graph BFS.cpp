  public:
    // Function to detect cycle in an undirected graph.
    
    bool bfs(int si,vector<int> adj[],vector<bool> &vis){
        
        queue<pair<int,int>> pending;
        pending.push({si,-1});
        vis[si]=true;
        while(pending.size()!=0){
            int child = pending.front().first;
            int paren = pending.front().second;
            pending.pop();
            
            for(auto it:adj[child]){
                
                if(!vis[it]){
                    vis[it]=true;
                    pending.push({it,child});
                }else if(paren!=it){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        vector<bool> vis(V,false);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(bfs(i,adj,vis)==true) return true;
            }
        }
        
        
        return false;
        
    }
};
