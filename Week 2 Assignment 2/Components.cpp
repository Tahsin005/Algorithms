#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int bfs(int s){
    int sz = 0;
    vector<int> comp;
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        sz++;

        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
        }
    }
    return sz;
}

int main(){
    Faster
    int n,e;
    cin>>n>>e;

    for(int i = 0; i < e; ++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> components;

    for(int i = 0; i < N; ++i){
        if(visited[i]) continue;
        int data = bfs(i);
        components.push_back(data);
    }
    vector<int> v;
    for(int data : components){
        if(data > 1){
            v.push_back(data);
        }
    }
    sort(v.begin(),v.end());
    for(int val: v){
        cout<<val<<" ";
    }
    return 0;
}


