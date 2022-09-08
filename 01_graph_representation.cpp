#include<bits/stdc++.h>
using namespace std;

// using adjacency matrix
// int main(){
//     int n,m;
//     cin>> n>> m;

//     int adj[n+1][n+1];  // declare the adjancy matrix

//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v; 
//         adj[u][v]=1;
//         adj[v][u]=1;
//     }
//    return 0;
// }

// using adjacency list
// now using  vector to reduce the time complexity to  N+2E from N*N using adjacency list

int main()
{
    int n,m;
    cin>> n >> m;

    vector<int> adj[n+1]; // for unweghted graph.
    //for wirghted graph  use pairing
    // vector<pair<int,int>> adj[n+1]

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        // cin>>u>>v>>wt ;  // for weighted graph
        // adj[u].push_back({v,wt});
        // adj[v].push_back({u,wt});


        //use both line in case of undirected graph 
        //in case of directedd graph use only first line..
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}