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
    /*
    Cycle Don't exists

    4 4
    1 2 5
    2 3 2
    3 4 -2
    1 4 10
    */
    for(int i = 1; i <= n - 1; i++){
        for(int j = 0; j < v.size(); j++){
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if(dis[a] + w < dis[b]){
                dis[b] = dis[a] + w;
            }
        }
    }
    bool cycle = false;
    for(int j = 0; j < v.size(); j++){
        Edge ed = v[j];
        int a = ed.u;
        int b = ed.v;
        int w = ed.w;
        if(dis[a] + w < dis[b]){
            cycle = true;
            break;
        }
    }
    /*
    Cycle Exists

    3 3
    1 2 2
    3 1 -1
    2 3 -3
    */
    if(cycle){
        cout<<"Cycle Exists"<<endl;
        cout<<"Answe is Wrong"<<endl;
    }
    else{
        for(int i = 1; i <= n; i++){
            cout<<"Node "<<i<<" : "<<dis[i]<<endl;
        }
    }
    
    return 0;
}