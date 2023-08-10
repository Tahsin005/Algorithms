#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e5 + 7;
vector<int> adj[N];
vector<int> comp[N];
bool visited[N];
int k = 1;
int level[N];

void dfs(int u){
    visited[u] = true;
    // comp[k].push_back(u);
    for(int j: adj[u]){
        if(visited[j]){
            continue;
        } 
        dfs(j);
    }
}
void bfs(int s){
    level[s] = 0;

    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int u = q.front();
        comp[k].push_back(u);
        q.pop();
        for(int v: adj[u]){
            if(visited[v] == true){
                comp[k].push_back(v);
                continue;
            } 
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;

        }
    }
    k++;

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
    vector<int> v;
    int cc = 0;
    for(int i = 0; i < n; i++){
        if(visited[i] == true) continue;
        // bfs(i);
        v.push_back(i);
        dfs(i);
        cc++;
        // k++;
    }
    for(int val:v){
        cout<<val<<" "; 
        // k++;
        bfs(val);
    }
    cout<<endl;
    // bfs(2);
    for(int i = 1; i <= k; i++){
        cout<<"Component "<<i<<" : "<<" ";
        for(int val: comp[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    // for(int i = 1; i <= n; i++){
    //     cout<<"Level of "<<i<<": "<<level[i]<<endl;
    //     // if(level[i] == 2){
    //     //     cout<<i<<" ";
    //     // }
    // }
    // cout<<endl;
    // cout<<"Level of "<<k<<" = "<<level[k]<<endl;
    // cout<<"Number of connected components : "<<cc<<endl;
    // for(int i = 1; i <= cc; i++){
    //     cout<<"Component "<<i<<" : "<<" ";
    //     for(int j: comp[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}