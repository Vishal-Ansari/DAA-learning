// C++ program to check if there exists a path between two vertices of a graph. 
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//function definition
bool isPathBFS(vector <vector<int>>& graph, int nodes, int source, int end){
    //BFS implementation 
    
    bool visited[nodes];
    for(int i = 0;i<nodes;++i){
        visited[i] = false;
    }
    
    queue <int> traversal;
    traversal.push(source);
    visited[source-1] = true;
    
    while(!traversal.empty()){
        //dequeue the front element
        source = traversal.front();
        traversal.pop();
        
        for(int i = 0;i < (int)graph[source-1].size();++i){
            if(graph[source-1][i]==end) 
                    return true;
            
            if(visited[graph[source-1][i]-1]==false){
                
                traversal.push(graph[source-1][i]);
                visited[graph[source-1][i]-1] = true;
            }
        }
    }
    
    return false;
}

int main(){
    //input
    int nodes;
    cout << "No. of nodes in graph = ";
    cin >> nodes;
    
    int edges;
    cout << "No. of edges in graph = ";
    cin >> edges;
    
    vector <vector<int>> graph;
    graph.resize(nodes);
    
    cout << "Edges:\n";
    int source,end;
    
    while(edges--){
        cin >> source>>end;
        
        //As we are using 1-indexing for nodes
        if(source > nodes || end > nodes){
            cout << "Invalid nodes.";
            return 1;
        }
        
        graph[source-1].push_back(end);
    }
    
    int query;
    cout << "No. of queries = ";
    cin >> query;
    
    while(query--){
        cin >> source>>end;
        
        //output
        if(source > nodes || end > nodes){
            cout << "Invalid nodes.\n";
            continue;
        }
        
        if(isPathBFS(graph,nodes,source,end)){
            cout << "Yes"<<"\n";
        }else cout << "No"<<"\n";
    }
    return 0;
}


 
/*
// C++ program to check if there exists a path between two vertices of a graph. 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//function definition
bool isPathDFS(vector <vector<int>>& graph, int nodes, int source, int end){
    //DFS implementation 
    
    bool visited[nodes];
    for(int i = 0;i<nodes;++i){
        visited[i] = false;
    }
    
    stack <int> traversal;
    traversal.push(source);
    visited[source-1] = true;
    
    while(!traversal.empty()){
        //Pop the front element
        source = traversal.top();
        traversal.pop();
        
        for(int i = 0;i < (int)graph[source-1].size();++i){
            if(graph[source-1][i]==end) 
                    return true;
            
            if(visited[graph[source-1][i]-1]==false){
                
                traversal.push(graph[source-1][i]);
                visited[graph[source-1][i]-1] = true;
            }
        }
    }
    
    return false;
}

int main(){
    //input
    int nodes;
    cout << "No. of nodes in graph = ";
    cin >> nodes;
    
    int edges;
    cout << "No. of edges in graph = ";
    cin >> edges;
    
    vector <vector<int>> graph;
    graph.resize(nodes);
    
    cout << "Edges:\n";
    int source,end;
    
    while(edges--){
        cin >> source>>end;
        
        //As we are using 1-indexing for nodes
        if(source > nodes || end > nodes){
            cout << "Invalid nodes.";
            return 1;
        }
        
        graph[source-1].push_back(end);
    }
    
    int query;
    cout << "No. of queries = ";
    cin >> query;
    
    while(query--){
        cin >> source>>end;
        
        //output
        if(source > nodes || end > nodes){
            cout << "Invalid nodes.\n";
            continue;
        }
        
        if(isPathDFS(graph,nodes,source,end)){
            cout << "Yes"<<"\n";
        }else cout << "No"<<"\n";
    }
    return 0;
}

*/


