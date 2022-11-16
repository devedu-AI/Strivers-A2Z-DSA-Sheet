class Solution {
  public:
     stack<int> st;
     void topoDFS(int node,vector<pair<int,int>> edges[],vector<bool> &vis){
         vis[node]=true;
         for(auto it:edges[node]){
             if(!vis[it.first]){
                 topoDFS(it.first,edges,vis);
             }
         }
         st.push(node);
     }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>> adj[N];
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<bool> vis(N,false);
        for(int i=0;i<N;i++){
            if(!vis[i]){
                topoDFS(i,adj,vis);
            }
        }
        
        vector<int> dis(N,1e9);
        dis[0]=0;
        while(st.size()!=0){
            int node = st.top();
            st.pop();
            for(auto it:adj[node]){
                if((dis[node]+it.second) < dis[it.first]){
                    dis[it.first] = dis[node]+it.second;
                }
            }
         }
         for(int i=0;i<N;i++){
             if(dis[i]==1e9) dis[i]=-1;
         }
        return dis;
        
    }
};
