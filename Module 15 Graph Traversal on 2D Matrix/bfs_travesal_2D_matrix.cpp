#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pi pair<int,int>
const int N = 1005;
bool vis[N][N];
int dis[N][N];
int n,m;
vector<pi> path = {{-1,0},{1,0},{0,1},{0,-1}};

bool isValid(int ci,int cj){
    return ((ci >= 0 and ci < n) and (cj >= 0 and cj < m));
}
void bfs(int si,int sj){
    queue<pi> q;
    q.push({si,sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while(!q.empty()){
        pi parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();
        for(int i = 0; i < 4; i++){
            pi p = path[i];
            int ci = pI + p.first;
            int cj = pJ + p.second;
            if(isValid(ci,cj) and !vis[ci][cj]){
                vis[ci][cj] = true;
                q.push({ci,cj});
                dis[ci][cj] = dis[pI][pJ] + 1;
            }
        }
    }
}
int main(){
    Faster
    cin>>n>>m;
    char ch[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>ch[i][j];
        }
    }
    int si,sj;
    cin>>si>>sj;
    bfs(si,sj);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}