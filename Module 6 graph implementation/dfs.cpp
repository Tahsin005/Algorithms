#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5+7;
vector<int> adj[N];
bool visited[N];
void dfs(int u){
    // Section 1: actions just after entering node u
    // cout<<"Visiting : "<<u<<endl;
    visited[u] = true;
    for(int j: adj[u]){
        // Section 2: actions before entering new neighbor
        if(visited[j]) continue;
        dfs(j);
        // Section 3: actions after exiting neighbor
    }
    // Section 4: actions before exiting node u
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
    return 0;
}