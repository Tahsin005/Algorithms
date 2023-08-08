#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e5+7;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u){
    visited[u] = true;
    // cout<<"Visiting : "<<u<<endl;
    for(int v: adj[u]){
        if(visited[v]) continue;

        depth[v] = depth[u] + 1;
        
        dfs(v);
        // if(height[v] + 1 > height[u]){
        //     height[u] = height[v] + 1;
        // }
        height[u] = max(height[u],height[v] + 1);
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
    for(int i = 1; i <= n; i++){
        cout<<"Depth of node "<<i<<": "<<depth[i]<<endl;
    }
    cout<<"************"<<endl;
    for(int i = 1; i <= n; i++){
        cout<<"Height of node "<<i<<": "<<height[i]<<endl;
    }
    return 0;
}