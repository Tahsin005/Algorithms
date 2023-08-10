#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
void dfs(int u){
    visited[u] = true;
    for(int j: adj[u]){
        if(visited[j]){
            continue;
        } 
        dfs(j);
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
    }
    int k;
    cin>>k;
    dfs(k);
    int house = 0;
    for(int i = 0; i < n; i++){
        if(visited[i] == true){
            house++;
        }
    }
    cout<<house - 1<<endl;
    return 0;
}