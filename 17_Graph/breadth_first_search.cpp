#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int>adj[], int s,  bool visited[]){
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while (!q.empty()){
        int f = q.front(); q.pop();
        // cout<<f<<"    ";
        for(int x: adj[f]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
    
}

int BFSDin(vector<int> adj[], int V){
    bool visited[V];
    int numOfCompo = 0;
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
    for(int i=0;i<V;i++){
        if(!visited[i]){
            BFS(adj, i, visited);
            numOfCompo++;
        }
    }
    return numOfCompo;
}

void printGraph(vector<int> adj[], int V){
    for(int i=0;i<V;i++){
        cout<<i<<" - ";
        for(int x: adj[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int V = 7;
    vector<int> adj[V];
    addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);

    // addEdge(adj, 0, 1); 
    // addEdge(adj, 0, 2); 
    // addEdge(adj, 1, 2); 
    // addEdge(adj, 1, 3); 

    cout<<"Breadth First Search"<<endl;
    // printGraph(adj, V);
    cout<<BFSDin(adj , V);
}