#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
vector<int> comp[N];
int k = 1;
void dfs(int u){
    visited[u] = true;
    comp[k].push_back(u);
    for(int j: adj[u]){
        if(visited[j]){
            continue;
        } 
        dfs(j);
    }
}
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
    
    int cc = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i] == true) continue;
        // bfs(i);
        dfs(i);
        cc++;
        k++;
    }
    cout<<"Number of connected components : "<<cc<<endl;
    for(int i = 1; i <= cc; i++){
        cout<<"Component "<<i<<" : "<<" ";
        for(int j: comp[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}