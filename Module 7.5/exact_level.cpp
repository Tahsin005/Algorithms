#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int level[N];
void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v: adj[u]){
            if(visited[v] == true) continue;
            q.push(v);
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
    int k;
    cin>>k;
    bfs(1);
    for(int i = 1; i <= n; i++){
        // cout<<"Level of "<<i<<": "<<level[i]<<endl;
        if(level[i] == 2){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Level of "<<k<<" = "<<level[k]<<endl;
    return 0;
}