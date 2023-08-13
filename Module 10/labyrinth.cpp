#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e3 + 10;
vector<string> g;
bool visited[N][N];
int n,m;
typedef pair<int,int> pii;
int level[N][N];
pii parent[N][N];
vector<pii> direction = {{0,-1},{0,1},{-1,0},{1,0}};

bool isValid(int i,int j){
    return (i >= 0 and i < n) and (j >= 0 and j < m);
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

            if(isValid(ni,nj) and !visited[ni][nj] and g[i][j] != '#'){
                q.push({ni,nj});
                visited[ni][nj] = true;
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
            if(s[j] == 'A'){
                si = i,sj = j;
            }
            if(s[j] == 'B'){
                di = i,dj = j;
            }
        }
        g.push_back(s);
    }
    bfs(si,sj);
    if(level[di][dj] != 0){
        cout<<"YES"<<endl;
        cout<<level[di][dj]<<endl;
        vector<pii> path;
        pii curr = {di,dj};
        while(!(curr.first == si and curr.second == sj)){
            path.push_back(curr);
            curr = parent[curr.first][curr.second];
        }
        path.push_back({si,sj});
        reverse(path.begin(),path.end());
        // for(auto p:path){
        //     cout<<p.first<<" "<<p.second<<endl;
        // }
        for(int i = 1; i < path.size(); i++){
            if(path[i - 1].first == path[i].first){
                if(path[i - 1].second == path[i].second - 1){
                    cout<<"R";
                }
                else{
                    cout<<"L";
                }
            }
            else{
                if(path[i - 1].first == path[i].first - 1){
                    cout<<"D";
                }
                else{
                    cout<<"U";
                }
            }
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}