// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int N,m;
// 	cin >> N >> m;
// 	vector<pair<int,int> > adj[N]; 

// 	int a,b,wt;
// 	for(int i = 0; i<m ; i++){
// 		cin >> a >> b >> wt;
// 		adj[a].push_back(make_pair(b,wt));
// 		adj[b].push_back(make_pair(a,wt));
// 	}	
	
// 	int parent[N]; 
      
//     int key[N]; 
      
//     bool mstSet[N]; 
  
//     for (int i = 0; i < N; i++) 
//         key[i] = INT_MAX, mstSet[i] = false; 
    
//     priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq;

//     key[0] = 0; 
//     parent[0] = -1; 
//     pq.push({0, 0});
//     // Run the loop till all the nodes have been visited
//     // because in the brute code we checked for mstSet[node] == false while computing the minimum
//     // but here we simply take the minimal from the priority queue, so a lot of times a node might be taken twice
//     // hence its better to keep running till all the nodes have been taken. 
//     // try the following case: 
//     // Credits: Srejan Bera
//     // 6 7 
//     // 0 1 5 
//     // 0 2 10 
//     // 0 3 100 
//     // 1 3 50 
//     // 1 4 200
//     // 3 4 250
//     // 4 5 50 
//     while(!pq.empty())
//     { 
//         int u = pq.top().second; 
//         pq.pop(); 
        
//         mstSet[u] = true; 
        
//         for (auto it : adj[u]) {
//             int v = it.first;
//             int weight = it.second;
//             if (mstSet[v] == false && weight < key[v]) {
//                 parent[v] = u;
// 		key[v] = weight; 
//                 pq.push({key[v], v});    
//             }
//         }
            
//     } 
    
//     for (int i = 1; i < N; i++) 
//         cout << parent[i] << " - " << i <<" \n"; 
// 	return 0;
// }

#include <cstring>
#include <iostream>
using namespace std;
#define INF 9999999
#define V 5
 
int G[V][V] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}};
int main() {
  int no_edge;  // number of edge
  int selected[V];
  memset(selected, false, sizeof(selected));
  no_edge = 0;
  selected[0] = true;
 
  int x;  //  row number
  int y;  //  col number
  cout << "Edge"<< "  "<< "Weight";
  cout << endl;
  while (no_edge < V - 1) {
	int min = INF;
	x = 0;
	y = 0;
 
	for (int i = 0; i < V; i++) {
  	if (selected[i]) {
    	for (int j = 0; j < V; j++) {
      	if (!selected[j] && G[i][j]) { 
        	if (min > G[i][j]) {
          	min = G[i][j];
          	x = i;
          	y = j;
        	}
      	}
    	}
  	}
	}
	cout << x << " - " << y << " :  " << G[x][y];
	cout << endl;
	selected[y] = true;
	no_edge++;
  }
  return 0;
}

