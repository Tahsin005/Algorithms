#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s){
    for(int i = 0; i < N; i++){
        level[i] = INT_MAX;
    }
    for(int i = 0; i < N; i++){
        visited[i] = false;
    }

    level[s] = 0;
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v:adj[u]){
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main(){
    Faster
   
    int n,e;
    cin>>n>>e;
    for(int i = 0; i < e; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int x,y,k;
    cin>>x>>y>>k;
    bfs(x);
    if(visited[x] and visited[y]){
        if(level[y - 1] == k){
            cout<<"YES"<<endl;
        }
        else if(level[y - 1] / 2 == k / 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
        // vector<int> v;
        // for(int i = 0; i <= y; i++){
        //     // cout<<level[i]<<" ";
        //     if(level[i] == k){
        //         v.push_back(i);
        //     }
        // }
        // cout<<endl;
        // bfs(y);
        // vector<int> v1;
        // for(int i = 0; i <= y; i++){
        //     // cout<<level[i]<<" ";
        //     if(level[i] == k){
        //         v1.push_back(i);
        //     }
        // }
        // for(auto val: v){
        //     cout<<val<<" ";
        // }cout<<endl;
        // for(auto val: v1){
        //     cout<<val<<" ";
        // }
        // int q;
        // cin>>q;
        // for(int i = 0; i < q; i++){
        //     int s,d;
        //     cin>>s>>d;
        //     bfs(s);
        //     if(level[d] == INT_MAX){
        //         cout<<"-1"<<endl;
        //     }
        //     else{
        //         cout<<level[d]<<endl;
        //     }
        // }
