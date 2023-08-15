#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e3 + 7;
vector<string> g;
int n,m;

bool visited[N][N];
int level[N][N];
typedef pair<int,int> pii;
vector<pii> direction = {{0,1},{0,-1},{1,0},{-1,0}};
pii parent[N][N];
bool isValid(int i ,int j){
    return (i >= 0 and i < n and j >= 0 and j < m);
}
void bfs(int si,int sj){
    queue<pii> q;
    q.push({si,sj});
    level[si][sj] = 0;
    visited[si][sj] = true;
    while(!q.empty()){
        pii upair = q.front();
        int i = upair.first;
        int j = upair.second;
        q.pop();

        for(auto d: direction){
            int ni = i + d.first;
            int nj = j + d.second;

            if(isValid(ni,nj) and !visited[ni][nj] and g[ni][nj] != 'x'){
                q.push({ni,nj});
                visited[ni][nj] = true;;
                level[ni][nj] = level[i][j] + 1;
                parent[ni][nj] = {i,j};
            }
        }

    }
}
int main(){
    Faster
    int si,sj,di,dj;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        for(int j = 0; j < m; j++){
            if(s[j] == 's'){
                si = i,sj = j;
            }
            if(s[j] == 'e'){
                di = i, dj = j;
            }
        }
        g.push_back(s);
    }
    bfs(si,sj);
    if(level[di][dj] != 0){
        // cout<<"YES"<<endl;
        cout<<level[di][dj]<<endl;
    }
    else{
        // cout<<"NO"<<endl;
        cout<<"-1"<<endl;
    }
    return 0;
}