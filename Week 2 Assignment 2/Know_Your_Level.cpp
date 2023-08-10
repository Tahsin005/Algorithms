#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];

vector<int> bfs(int s,int l){
    vector<int> shopLevel;
    queue<pair<int,int>> q;
    q.push({s,0});
    visited[s] = true;

    while(!q.empty()){
        int u = q.front().first;
        int current_level = q.front().second;
        q.pop();

        if(current_level > l){
            break;
        }
        else if(current_level == l){
            shopLevel.push_back(u);
        }

        for(int v:adj[u]){
            if(visited[v] == true) continue;
            q.push({v,current_level + 1});
            visited[v] = true;
        }
    }
    return shopLevel;
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
    int l;
    cin>>l;
    vector<int> res = bfs(0,l);
    if(res.empty() == true){
        cout<<"-1"<<endl;
    }
    else{
        sort(res.begin(),res.end());
        for(int val:res){
            cout<<val<<" ";
        }
    }
    cout<<endl;
    return 0;
}