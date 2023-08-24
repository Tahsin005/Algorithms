#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1005;
vector<string> g;
bool visited[N][N];
int n,m;
typedef pair<int,int> pi;
vector<pi> direction = {{0,-1},{0,1},{-1,0},{1,0}};
vector<pair<int,int>> pr;
bool isValid(int i,int j){
    return (i >= 0 and i < n) and (j >= 0 and j < m);
}
void dfs(int i,int j){
    if(!isValid(i,j)) return;
    if(visited[i][j]) return;
    if(g[i][j] == '-') return;

    visited[i][j] = true;
    for(auto d:direction){
        dfs(i + d.first, j + d.second);
    }
}

int main(){
    Faster
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        g.push_back(s);
    }
    int si,sj,di,dj;
    cin>>si>>sj;
    cin>>di>>dj;
    dfs(si,sj);
    if(visited[di][dj] == true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}