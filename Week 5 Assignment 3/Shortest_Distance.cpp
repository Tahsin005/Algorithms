#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const ll INF = 1e18 + 7;
const ll N = 1e3 + 7;
ll d[N][N];
ll n,m;
void dtance_initialize(){
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            if(i != j) d[i][j] = INF;
        }
    }
}
void print_matrix(){
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            if(d[i][j] == INF) cout<<"x ";
            else cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    Faster
    cin>>n>>m;
    dtance_initialize();
    for(ll i = 0; i < m; i++){
        ll u,v,w;
        cin>>u>>v>>w;
        if(d[u][v] > w){
            d[u][v] = w;
        }
    }

    for(ll k = 1; k <= n; k++){
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
            }
        }
    }
    // print_matrix();
    ll q;
    cin>>q;
    while(q--){
        ll s,des;
        cin>>s>>des;
        if(d[s][des] == INF){
            cout<<"-1"<<endl;
        }
        else{
            cout<<d[s][des]<<endl;
        }
    }
    return 0;
}