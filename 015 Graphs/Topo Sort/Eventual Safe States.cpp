class Solution {
  public:
    bool dfs(int node,vector<int> adj[],vector<bool> &vis,
    vector<int> &pathVis){
        
        vis[node]=true;
        pathVis[node]=1;
        
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,adj,vis,pathVis)){
                    return true;
                }
            }else if(pathVis[it]){
                return true;
            }
        }
        pathVis[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int> ans;
        vector<int> pathVis(V,0);
        vector<bool> vis(V,false);
        vector<int> check(V,0);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,adj,vis,pathVis);
            }
        }
        
        for(int i=0;i<V;i++){
            if(!pathVis[i]) ans.push_back(i);
        }
        
        return ans;
    }
};
