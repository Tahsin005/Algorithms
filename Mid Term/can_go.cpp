#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef pair<int,int> pii;
const int N = 1e5 + 7;
const int INF = 1e9 + 7;
vector<pii> g[N];
vector<pair<pii,int>> list_of_edges;
int dist[N];
int n,m;
void bellman_ford(int s){
    for(int i = 1; i <= n; i++){
        dist[i] = INF;
    }
    dist[s] = 0;
    for(int i = 1; i < n; i++){
        for(int u = 1; u <= n; u++){
            for(pii edge:g[u]){
                int v = edge.first;
                int w = edge.second;

                if(dist[u] != INF and dist[v] > dist[u] + w){
                    dist[v] = dist[u] + w;
                }
            }
        }
    }
}
int main(){
    Faster
    cin>>n>>m;
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
    }
    int t;
    cin>>t;
    int q;
    cin>>q;
    bellman_ford(t);
    while(q--){
        int d,dw;
        cin>>d>>dw;
        if(dist[d] <= dw){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    // for (int i = 0; i <= n; i++){
    //     cout << "Node " << i << " : " << dist[i] << endl;
    // }
    return 0;
}