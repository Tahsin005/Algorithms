#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pi pair<int,int>
const int N = 1e5 + 5;
vector<pi> v[N];
bool vis[N];
class Edge{
    public:
        int a,b,w;
        Edge(int a,int b,int w){
            this->a = a;
            this->b = b;
            this->w = w;
        }
};
class cmp{
    public:
        bool operator()(Edge a,Edge b){
            return a.w > b.w;
        }
};
/*
5 6
1 2 3
2 3 5
2 4 2
3 4 8
5 1 7
5 4 4
*/
void prims(int s,int n){
    priority_queue<Edge,vector<Edge>,cmp> pq;
    vector<Edge> edgelist;
    pq.push(Edge(s,s,0));
    int cnt = 0;
    while(!pq.empty()){
        Edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        if(vis[b]) continue;
        vis[b] = true;
        cnt++;
        edgelist.push_back(parent);
        for(int i = 0; i < v[b].size(); i++){
            pi p = v[b][i];
            int v = p.first;
            int w = p.second;
            if(!vis[v]){
                pq.push(Edge(b,v,w));
            }
        }
    }
    edgelist.erase(edgelist.begin());
    ll sum = 0;
    for(Edge val: edgelist){
        sum += (ll)(val.w);
    }
    if(cnt == n){
        cout<<sum<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}
int main(){
    Faster
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    prims(1,n);
    return 0;
}