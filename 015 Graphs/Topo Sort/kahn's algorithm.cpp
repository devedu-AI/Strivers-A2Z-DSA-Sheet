class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> ans;
	void bfs(int V,vector<int> adj[],vector<int> inDegree){
	    queue<int> pending;
	    
	    for(int i=0;i<V;i++) if(inDegree[i]==0) pending.push(i);
	    
	    while(pending.size()!=0){
	        int node = pending.front();
	        pending.pop();
	        ans.push_back(node);
	        for(auto it:adj[node]){
	            inDegree[it]--;
	            if(inDegree[it]==0) pending.push(it);
	        }
	    }
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> inDegree(V,0);
	    
	    for(int i=0;i<V;i++){
	        for(auto it:adj[i]) inDegree[it]++;
	    }
	    
	    bfs(V,adj,inDegree);
	    return ans;
	}
};
