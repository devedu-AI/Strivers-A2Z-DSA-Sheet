class Solution {
  public:
    void dfs(int i,int j,vector<vector<int>> &grid,vector<vector<bool>> &vis
    ,vector<pair<int,int>> &vcc,int row0,int col0){
        
        
        int n=grid.size();
        int m=grid[0].size();
        
        vis[i][j]=true;
        vcc.push_back({i-row0,j-col0});
        
        int delRow[]={-1,0,+1,0};
        int delCol[]={0,+1,0,-1};
        
        for(int k=0;k<4;k++){
            int nrow=i+delRow[k];
            int ncol=j+delCol[k];
            
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&
               !vis[nrow][ncol]&&grid[nrow][ncol]==1){
                   dfs(nrow,ncol,grid,vis,vcc,row0,col0);
               }
        }
        
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        set<vector<pair<int,int>>> st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    vector<pair<int,int>> vcc;
                    dfs(i,j,grid,vis,vcc,i,j);
                    st.insert(vcc);
                }
            }
        }
        
        return st.size();
    }
};
