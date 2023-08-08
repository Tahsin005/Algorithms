#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5+7;
vector<pair<int,int>> adj[N];
int main(){
    Faster
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int u,v,w;
        // cin>>u>>v;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        // adj[v].push_back({v,w});
    }
    for(int i = 1; i <= n; i++){
        cout<<"List "<<i<<" : "<<" ";
        for(pair<int,int> j: adj[i]){
            cout<<"("<<j.first<<", "<<j.second<<")"<<" ";
        }
        cout<<endl;
    }
    return 0;
}