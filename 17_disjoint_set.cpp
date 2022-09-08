#include <bits/stdc++.h>
using namespace std;

int parent[100000];
int rank[100000];

void makeset()
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findpar(int node)
{
    if (node == parent[node])
    {
        return node;
    }

    return parent[node] = findpar(parent[node]);
}

void unions(int u, int v)
{
    u = findpar(u);
    v = findpar(v);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

void main(){
    makeset();
    int m;
    cin>>m;
    while(m--){
        int u,v;
        unions(u,v);

        //if 2 and 3 belong to the same component or not
        if(findpar(2)!=findpar(3))
            cout<<"Different component";
            else
            cout<<"same component";
        
    }
}