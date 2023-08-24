#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1005;
bool visited[N][N];
typedef pair<int,int> pi;
int dist[N][N];
int n,m;
vector<pi> direction = {{1,2},{1,-2},{-1,2},{-1,-2},
                         {2,1},{2,-1},{-2,1},{-2,-1}};
bool isValid(int i,int j){
    return (i >= 0 and i < n and j >= 0 and j < m);
}
void bfs(int si,int sj){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            dist[i][j] = INT_MAX;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            visited[i][j] = false;
        }
    }
    queue<pi> q;
    q.push({si,sj});
    visited[si][sj] = true;
    dist[si][sj] = 0;

    while(!q.empty()){
        pi upair = q.front();
        int i = upair.first;
        int j = upair.second;
        q.pop();

        for(auto d:direction){
            int ni = i + d.first;
            int nj = j + d.second;

            if(isValid(ni,nj) and !visited[ni][nj]){
                q.push({ni,nj});
                visited[ni][nj] = true;
                dist[ni][nj] = dist[i][j] + 1;
            }
        }

    }
}
int main(){
    Faster
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int ki,kj;
        cin>>ki>>kj;
        int qi,qj;
        cin>>qi>>qj;
        bfs(ki,kj);
        if(dist[qi][qj] == INT_MAX){
            cout<<"-1"<<endl;
        }
        else{
            cout<<dist[qi][qj]<<endl;
        }
    }
    return 0;
}