#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class Edge{
    public:
        int u;
        int v;
        int w;
        Edge(int u,int v,int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};
int main(){
    Faster
    int n,e;
    cin>>n>>e;
    vector<Edge> v;
    while(e--){
        int a,b,w;
        cin>>a>>b>>w;
        Edge ed(a,b,w);
        v.push_back(ed);
    }
    int dis[n + 1];
    for(int i = 1; i <= n; i++){
        dis[i] = INT_MAX;
    }
    dis[1] = 0;
    for(int i = 1; i <= n - 1; i++){
        for(int j = 0; j < v.size(); j++){
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if(dis[a] < INT_MAX and dis[a] + w < dis[b]){
                dis[b] = dis[a] + w;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(dis[i] == INT_MAX){
            dis[i] = 30000;
            cout<<dis[i]<<" ";
        }
        else{
            cout<<dis[i]<<" ";
        }
    }
    
    return 0;
}