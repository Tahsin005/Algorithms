#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
stack<int> st;
void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        st.push(u);
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
    bfs(1);
    while(!st.empty()){
        int r = st.top();
        cout<<r<<" ";
        st.pop();
    }
    return 0;
}