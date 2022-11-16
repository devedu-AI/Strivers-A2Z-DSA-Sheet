class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        set<pair<int,int>> st;
        vector<int> dist(V,1e9);
        dist[S]=0;
        st.insert({0,S});
        while(!st.empty()){
            auto it = *(st.begin());
            int node = it.second;
            int len = it.first;
            st.erase(it);
            
            for(auto ii:adj[node]){
                int aNode = ii[0];
                int alen = ii[1];
                
                if(len+alen < dist[aNode]){
                    if(dist[aNode]!=1e9) st.erase({dist[aNode],aNode});
                    dist[aNode]=alen+len;
                    st.insert({dist[aNode],aNode});
                }
                
            }
            
            
        }

       return dist;
    }
};
