class Solution {
public:
    void dfs(int sr,int sc,vector<vector<int>> &image,
    int newColor, vector<vector<bool>> &visited,int start){
        
        visited[sr][sc]=true;
        image[sr][sc]=newColor;
        
        int r=image.size();
        int c=image[0].size();
        
        int delRow[]={-1,0,+1,0};
        int delCol[]={0,+1,0,-1};
        
        for(int i=0;i<4;i++){
            int nrow=sr+delRow[i];
            int ncol=sc+delCol[i];
            
            if(nrow>=0&&nrow<r&&ncol>=0&&ncol<c
               &&image[nrow][ncol]==start&&!visited[nrow][ncol]){
                   dfs(nrow,ncol,image,newColor,visited,start);
               }
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        dfs(sr,sc,image,color,vis,image[sr][sc]);
        return image;
    }
};
