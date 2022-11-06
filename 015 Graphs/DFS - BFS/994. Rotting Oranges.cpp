class Solution {
public:
    int mnt=0;
    void bfs(int sr,int sc,vector<vector<int>> &grid,vector<vector<bool>> &vis){
        
        grid[sr][sc]=2;
        vis[sr][sc]=true;
        
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<pair<int,int>,int>> pending;
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    pending.push({{i,j},0});
                    vis[i][j]=true;
                }
            }
        }
        
        while(pending.size()!=0){
            
            int row = pending.front().first.first;
            int col = pending.front().first.second;
            int tt =  pending.front().second;
            
            pending.pop();
            
            int delRow[]={-1,0,+1,0};
            int delCol[]={0,+1,0,-1};
        
            for(int i=0;i<4;i++){
               int nrow = row+delRow[i];
               int ncol = col+delCol[i];
            
               if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m
                  &&grid[nrow][ncol]==1&&!vis[nrow][ncol]){
                   pending.push({{nrow,ncol},tt+1});
                   mnt=max(mnt,tt+1);
                   grid[nrow][ncol]=2;
                   vis[nrow][ncol]=true;
            }
            
        }
            
        }
        
    }
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2 && !vis[i][j]){
                    bfs(i,j,grid,vis);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return mnt;
    }
};
