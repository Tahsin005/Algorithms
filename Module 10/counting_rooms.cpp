#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e3 + 10;
vector<string> g;
bool visited[N][N];
int n,m;
typedef pair<int,int> pii;
vector<pii> direction = {{0,-1},{0,1},{-1,0},{1,0}};
bool isValid(int i,int j){
    return (i >= 0 and i < n) and (j >= 0 and j < m);
}
void dfs(int i,int j){
    if(!isValid(i,j)) return;
    if(visited[i][j]) return;
    if(g[i][j] == '#') return;

    visited[i][j] = true;
    for(auto d:direction){
        dfs(i + d.first, j + d.second);
    }
    // dfs(i,j - 1);
    // dfs(i,j + 1);
    // dfs(i - 1,j);
    // dfs(i + 1, j);
}
int main(){
    Faster
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        g.push_back(s);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == '#') continue;
            if(visited[i][j] == true) continue;
            dfs(i,j);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}