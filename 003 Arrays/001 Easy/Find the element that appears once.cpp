class Solution{
public:	
	int search(int A[], int N){
	    //code
	    
	    unordered_map<int,int> map;
	    for(int i=0;i<N;i++) map[A[i]]++;
	    
	    for(auto i:map) if(i.second==1) return i.first;
	    return -1;
	    
	    
	}
};
