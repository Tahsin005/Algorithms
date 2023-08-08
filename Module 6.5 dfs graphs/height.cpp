#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e5+7;
vector<int> adj[N];
bool visited[N];
int height[N];

void dfs(int u){
    visited[u] = true;
    for(int v: adj[u]){
        if(visited[v]) continue;
        dfs(v);
        height[u] = max(height[u], height[v] + 1);
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
    cout<<"Height of "<<d<<" = "<<height[d];
    return 0;
}