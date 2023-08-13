#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e3 + 10;
int visited[N][N];
typedef pair<int,int> pii;
int level[N][N];
vector<pii> direction = {{1,2},{1,-2},{-1,2},{-1,-2},
                         {2,1},{2,-1},{-2,1},{-2,-1}};
bool isValid(int i,int j){
    return (i >= 0 and i < 8 and j >= 0 and j < 8);
}
void bfs(int si,int sj){
    queue<pii> q;
    q.push({si,sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty()){
        pii upair = q.front();
        int i = upair.first;
        int j = upair.second;
        q.pop();

        for(auto d:direction){
            int ni = i + d.first;
            int nj = j + d.second;

            if(isValid(ni,nj) and !visited[ni][nj]){
                q.push({ni,nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
            }
        }

    }
}
void reset_level_visit(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            level[i][j] = 0;
            visited[i][j] = false;
        }
    }
}
int main(){
    Faster
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string x,y;
        cin>>x>>y;
        int si = x[0] - 'a';
        int sj = x[1] - '1';
        int di = y[0] - 'a';
        int dj = y[1] - '1';

        bfs(si,sj);
        cout<<level[di][dj]<<endl;
        reset_level_visit();
    }
    return 0;
}