#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int,int> pii;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 7;
vector<pii> adj[N];
vector<int> dist(N,INT_MAX);
bool visited[N];
void dijkstra(int source){
    priority_queue<pii,vector<pii>,greater<pii>> pq;

    dist[source] = 0;

    pq.push({dist[source],source});

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        for(pii vpair:adj[u]){
            int v = vpair.first;
            int w = vpair.second;

            if(visited[v] == true) continue;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({dist[v],v});
            }

        }
    }
}
int main(){
    Faster
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    dijkstra(1);
    for(int i = 1; i <= n; i++){
        cout<<"Distance of "<<i<<" : "<<dist[i]<<endl;
    }
    return 0;
}