class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &mat,vector<vector<bool>> &vis){
        vis[i][j]=true;
        
        int n=mat.size();
        int m=mat[0].size();
        
        int delRow[]={-1,0,+1,0};
        int delCol[]={0,+1,0,-1};
        
        for(int k=0;k<4;k++){
            int nrow=i+delRow[k];
            int ncol=j+delCol[k];
            
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&
               mat[nrow][ncol]=='O'&&!vis[nrow][ncol]){
                   dfs(nrow,ncol,mat,vis);
               }
        }
    }
    void solve(vector<vector<char>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        
        
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        
        for(int i=0;i<m;i++){
            if(!vis[0][i] && mat[0][i]=='O'){
                dfs(0,i,mat,vis);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i][0] && mat[i][0]=='O'){
                dfs(i,0,mat,vis);
            }
        }
        for(int i=0;i<m;i++){
            if(!vis[n-1][i] && mat[n-1][i]=='O'){
                dfs(n-1,i,mat,vis);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i][m-1] && mat[i][m-1]=='O'){
                dfs(i,m-1,mat,vis);
            }
        }
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]=='O'){
                    mat[i][j]='X';
                    vis[i][j]=true;
                }
            }
        }
    }
};
