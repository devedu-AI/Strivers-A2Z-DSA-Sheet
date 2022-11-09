class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	stack<int> st;
	void dfs(int nd,vector<int> adj[],vector<bool> &vis){
	    vis[nd]=true;
	    for(auto it:adj[nd]){
	        if(!vis[it]){
	            dfs(it,adj,vis);
	        }
	    }
	    st.push(nd);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<bool> vis(V,false);
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,adj,vis);
	        }
	    }
	    vector<int> ans;
	    while(st.size()!=0){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};
