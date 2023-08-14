#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e5 + 7;
typedef pair<int,int> pii;
vector<pii> adj[N];
bool visited[N];
vector<int> dist(N,INT_MAX);
void dijkstra(int source){
    priority_queue<pii,vector<pii>,greater<pii>> pq;

    dist[source] = 0;

    pq.push({dist[source],source});

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        for(pii p:adj[u]){
            int v = p.first;
            int w = p.second;

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
        // adj[v].push_back({u,w});
    }
    int s,d;
    cin>>s>>d;
    dijkstra(s);
    cout<<dist[d]<<endl;
    return 0;
}