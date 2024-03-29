#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5+7;
vector<int> adj[N];
bool visited[N];
void dfs(int u){
    visited[u] = true;
    for(int v: adj[u]){
        if(visited[v] == true) continue;
        dfs(v);
    }
    cout<<u<<" ";
}
int main(){
    Faster
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    dfs(1);
    return 0;
}