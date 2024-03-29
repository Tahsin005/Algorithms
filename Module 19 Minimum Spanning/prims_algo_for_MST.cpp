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
void prims(int s){
    priority_queue<Edge,vector<Edge>,cmp> pq;
    vector<Edge> edgelist;
    pq.push(Edge(s,s,0));
    while(!pq.empty()){
        Edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        if(vis[b]) continue;
        vis[b] = true;
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
    for(Edge val: edgelist){
        cout<<val.a<<" "<<val.b<<" "<<val.w<<endl;
    }

}
/*
8 11
1 5 2
1 2 4
1 4 10
5 4 5
2 4 8
2 3 18
3 4 11
4 8 9
4 7 11
7 6 1
8 6 2
*/
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
    prims(1);
    return 0;
}