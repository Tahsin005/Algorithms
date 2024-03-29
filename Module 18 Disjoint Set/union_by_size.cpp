#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
void dsu_set(int n){
    for(int i = 1; i <= n; i++){
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
int dsu_find(int n){
    while(parent[n] != -1){
        n = parent[n];
    }
    return n;
}
void dsu_union(int a,int b){
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
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
/*
7 4
1 2
2 3
4 5
6 5
*/
int main(){
    Faster
    int n,e;
    cin>>n>>e;
    dsu_set(n);
    for(int i = 1; i <= n; i++){
        cout<<parent[i]<<" ";
    }
    cout<<endl;
    while(e--){
        int a,b;
        cin>>a>>b;
        dsu_union(a,b);
    }
    for(int i = 1; i <= n; i++){
        cout<<parent[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i <= n; i++){
        cout<<parentSize[i]<<" ";
    }
    cout<<endl;
    // cout<<dsu_find(5)<<endl;

    return 0;
}