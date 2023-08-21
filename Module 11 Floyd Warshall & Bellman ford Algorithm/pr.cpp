#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 7;
typedef pair<int,int> pii;
vector<pii> g[N];
int d[N];
int n,m;
void bellman_ford(int s){
    for(int i = 1; i <= n; i++){
        d[i] = INT_MAX;
    }
    d[s] = 0;
    for(int i = 1; i < n; i++){
        for(int u = 1 ; u <= n; u++){
            for(pii upair:g[u]){
                int v = upair.first;
                int w = upair.second;
                if(d[u] != INT_MAX and d[v] > d[u] + w){
                    d[v] = d[u] + w;
                }
            }
        }
    }
}
int main(){
    Faster
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
    }
    bellman_ford(1);
    for(int i = 1; i <= n; i++){
        cout<<"D of "<<i<<" : "<<d[i]<<endl;
    }
    return 0;
}