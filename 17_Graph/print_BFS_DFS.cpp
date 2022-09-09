#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Breadth_First_Search(vector<int>adj[], int n, int a){
    queue<int>q;
    bool reached[n];
    int shortestPath[n];

    for(int i=0;i<n;i++) {reached[i] = false;
    shortestPath[i] = INT_MAX;
    }
    q.push(a);
    reached[a] = true;
    shortestPath[a] = 0;
    
    while (!q.empty())
    {
        int x = q.front(); q.pop();
        for(int y: adj[x]){
            if(!reached[y]){
                reached[y] = true;
                q.push(y);
                shortestPath[y] = shortestPath[x] + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<shortestPath[i]<<" ";
    }
    
}

void printGraph(vector<int>adj[], int n){
    for(int i=0;i<n;i++){
        for(int x: adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

void DFSRec(vector<int>adj[], int a, bool visited[]){
    cout<<a<<" ";
    visited[a] = true;
    for(int x: adj[a]){
        if(!visited[x]){
            visited[x] = true;
            DFSRec(adj, x, visited);
        }
    }
}

void Depth_First_Search(vector<int>adj[], int n){
    bool visited[n];
    for(int i=0;i<n;i++) visited[i] = false;
    DFSRec(adj, 0, visited);
}


void BFS_Detect_Cycle(vector<int>adj[], int n, int a){
    queue<int>q;
    bool visited[n];
    for(int i=0;i<n;i++) visited[i] = false;
    q.push(a);
    visited[a] = true;
    int curr = -1, para;
    while (!q.empty())
    {
        int x = q.front(); q.pop();
        para = curr;
        curr = x;
        for(int y: adj[x]){
            if(!visited[y]){
                q.push(y);
                visited[y] = true;
            }
            else if(y != para && para != -1){
                cout<<"Cycle Detected!"<<y<<" ";
                break;
            }
        }
    }
}

void DFS_Rec(vector<int>adj[], int a, bool visited[], int parant){
    visited[a] = true;
    for(int y : adj[a]){
        if(!visited[y]){
            DFS_Rec(adj, y, visited, a);
        }
        else if(y != parant){
            cout<<"Cycle Detected ";
        }
    }
}

void DFS_Detect_Cycle(vector<int>adj[], int n){
    bool visited[n];
    for(int i=0;i<n;i++) visited[i] = false;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            DFS_Rec(adj, i, visited, -1);
        }
    }
}

void DFS_Detect_Cycle_Directed_Rec(vector<int>adj[], int u, bool visited[], bool inRec[]){
    visited[u] = true;
    inRec[u] = true;
    for(int v: adj[u]){
        if(!visited[v]){
            DFS_Detect_Cycle_Directed_Rec(adj, v, visited, inRec);
        }
        else if(inRec[v]){
            cout<<"Cycle Detected ";
        }
    }
    inRec[u] = false;
}

void DFS_Detect_Cycle_Directed(vector<int>adj[], int n){
    bool visited[n];
    bool inRec[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
        inRec[i] = false;
    }

    for(int i=0;i<n;i++){
        if(!visited[i]){

        }
    }
}


void BFS_Topological_Sort(vector<int>adj[], int n){
    int status[n];
    for(int i=0;i<n;i++) status[n] = 0;
    for(int i=0;i<n;i++){
        for(int v: adj[i]){
            status[v]++;
        }
    }
    queue<int>q;
    for(int i=0;i<n;i++){
        if(status[i] == 0) q.push(i);
    }
    while(!q.empty()){
        int u = q.front(); q.pop();
        cout<<u<<" ";
        for(int v: adj[u]){
            if(--status[v] == 0){
                q.push(v);
            }
        }
    }
}


int main(){
    int n = 6;
    vector<int> adj[n];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 5);
    // printGraph(adj, n);
    cout<<endl;
    DFS_Detect_Cycle(adj, n);
    cout<<endl;
    // Depth_First_Search(adj, n);
}