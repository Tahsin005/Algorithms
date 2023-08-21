#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e3 + 7;
int d[N][N];
const int INF = 1e9 + 7;
int n,m;
/*
5
7
1 2 2
1 3 6
2 3 1
3 4 4
4 2 6
2 5 3
5 4 9
*/
void distance_initialize(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i != j) 
                d[i][j] = INF;
        }
    }
}
void print_matrix(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(d[i][j] == INF) cout<<"x ";
            else cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    Faster
    cin>>n>>m;
    distance_initialize();
    for(int i = 0; i < m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        d[u][v] = w;
        // d[v][u] = w;
    }
    cout<<"Before floyd warshall : "<<endl;
    print_matrix();

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
            }
        }
    }
    cout<<"After floyd warshall : "<<endl;
    print_matrix();
    return 0;
}