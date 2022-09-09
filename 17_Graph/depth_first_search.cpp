#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int>adj[], int V){
    for(int i=0;i<V;i++){
        cout<<i<<" - ";
        for(int x: adj[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}

void DFSRec(vector<int>adj[], int s, bool visited[]){
    visited[s] = true;
    // cout<<s<<" ";
    for(int x: adj[s]){
        if(!visited[x]){
            DFSRec(adj, x, visited);
        }
    }
}

int DFS(vector<int>adj[], int V){
    bool visited[V];
    int count=0;
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
    for(int i=0;i<V;i++){
        if(!visited[i]){
            DFSRec(adj, i, visited);
            count++;
        }
    }
    return count;
}

int main(){
    int V = 10;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 5);
    addEdge(adj, 3, 6);
    addEdge(adj, 5, 6);
    addEdge(adj, 7, 8);
    addEdge(adj, 7, 9);
    addEdge(adj, 8, 9);

    cout<<DFS(adj, V);
    // printGraph(adj, V);
}