class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        int count = 1;
        vector<vector<int>> matrix;
        
        for(int i=0;i<n;i++){
            vector<int> ct(n,-1);
            matrix.push_back(ct);
            ct.clear();
        }
        
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++)
                matrix[top][i]=count++;
            top++;
            for(int i=top;i<=bottom;i++)
                matrix[i][right]=count++;
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                    matrix[bottom][i]=count++;
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                    matrix[i][left]=count++;
                left++;
            }
        }
        return matrix;
    }
};
