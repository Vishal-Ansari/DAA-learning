#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]){
    vector<int> bfs;
    vector<int> vis(V+1,0); // v+1,0 means all nodes are initialised to 0.

    for(int i=1;i<=V;i++){
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it: adj[node]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
        }
    }

return bfs;
    }
};

int main(){
	int tc;
	cin >> tc;
	// for multiple graphs
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u); // uncomment this for undirected graph 
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}

