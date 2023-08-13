#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 10;
vector<int> adj[N];
vector<bool> visited(N,false);
int level[N];
int parent[N];

void bfs(int source){
    for(int i = 0; i < N; i++){
        level[i] = INT_MAX;
    }
    queue<int> q;
    q.push(source);
    level[source] = 0;
    visited[source] = true;;
    parent[source] = -1;
    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            parent[v] = u;
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}
int main(){
    Faster
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    if(level[n] != INT_MAX){
        cout<<level[n] + 1<<endl;

        int curr = n;
        vector<int> path;

        while(curr != -1){
            path.push_back(curr);
            curr = parent[curr];
        }
        reverse(path.begin(),path.end());
        for(int val:path){
            cout<<val<<" ";
        }
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}