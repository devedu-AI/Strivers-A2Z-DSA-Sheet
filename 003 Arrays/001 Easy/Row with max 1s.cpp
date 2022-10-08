class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int max1 = 0;
	    int cnt = -1;
	    for(int i=0;i<n;i++){
	        int temp = 0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1) temp++;
	        }
	        if(temp>max1){
	            max1=temp;
	            cnt=i;
	        }
	    }
	    return cnt;
	}

};
