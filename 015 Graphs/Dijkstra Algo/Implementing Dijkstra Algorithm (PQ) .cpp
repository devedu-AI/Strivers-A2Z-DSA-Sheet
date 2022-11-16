class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
         
        vector<int> dist(V,1e9);
        dist[S]=0;
        pq.push({0,S});
        while(pq.size()!=0){
            int len = pq.top().first;
            int node  =pq.top().second;
            pq.pop();
            
            for(auto it:adj[node]){
                int aNode = it[0];
                int aWei = it[1];
                
                if(len+aWei < dist[aNode]){
                    dist[aNode] = len+aWei;
                    pq.push({dist[aNode],aNode});
                }
                
            }
            
        }

        return dist;

    }
};
