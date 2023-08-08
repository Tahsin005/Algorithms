#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e5+7;
vector<int> adj[N];
bool visited[N];
int depth[N];

void dfs(int u){
    visited[u] = true;
    // cout<<"Visiting : "<<u<<endl;
    for(int v: adj[u]){
        if(visited[v]) continue;

        depth[v] = depth[u] + 1;
        
        dfs(v);
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
    
    dfs(1);
    int d;
    cin>>d;
    cout<<"Depth of "<<d<<" = "<<depth[d];
    return 0;
}