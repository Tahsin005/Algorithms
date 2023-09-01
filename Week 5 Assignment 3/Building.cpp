#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
class Edge{
    public:
        ll a,b,w;
        Edge(ll a,ll b,ll w){
            this->a = a;
            this->b = b;
            this->w = w;
        }
};
bool cmp(Edge a,Edge b){
    return a.w < b.w;
}
const ll N = 1e5 + 5;
ll parent[N];
ll parentSize[N];
void dsu_set(ll n){
    for(ll i = 1; i <= n; i++){
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
ll dsu_find(ll n){
    while(parent[n] != -1){
        n = parent[n];
    }
    return n;
}
void dsu_union(ll a,ll b){
    ll leaderA = dsu_find(a);
    ll leaderB = dsu_find(b);
    if(leaderA != leaderB){
        if(parentSize[leaderA] > parentSize[leaderB]){
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else{
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}
int main(){
    Faster
    ll n,e;
    cin>>n>>e;
    vector<Edge> v;
    vector<Edge> ans;
    dsu_set(n);
    while(e--){
        ll a,b,w;
        cin>>a>>b>>w;
        v.push_back(Edge(a,b,w));
    }
    sort(v.begin(),v.end(),cmp);
    for(Edge val: v){
        ll a = val.a;
        ll b = val.b;
        ll w = val.w;
        ll leaderA = dsu_find(a);
        ll leaderB = dsu_find(b);
        if(leaderA == leaderB) continue;
        ans.push_back(val);
        dsu_union(a,b);
    }
    ll sum = 0;
    for(Edge val: ans){
        sum += (ll)(val.w);
    }
    if(ans.size() == n - 1) cout<<sum<<endl;
    else cout<<"-1"<<endl;
    return 0;
}