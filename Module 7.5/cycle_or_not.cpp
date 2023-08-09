#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
bool dfs(int u,int p = -1){
    bool cycleExists = false;
    visited[u] = true;
    for(int v: adj[u]){
        if(v == p) continue;
        if(visited[v]) return true;
        cycleExists = cycleExists || dfs(v,u);
    }
    return cycleExists;
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
    bool isCycle = false;
    for(int i = 1; i <= n; i++){
        if(visited[i]) continue;
        isCycle = isCycle || dfs(i);
    }
    if(isCycle) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}