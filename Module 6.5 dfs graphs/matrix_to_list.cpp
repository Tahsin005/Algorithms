#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e3+7;
int adjmat[N][N];
vector<int> adj[N];
int main(){
    Faster
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>adjmat[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(adjmat[i][j] == 1){
                adj[i + 1].push_back(j+1);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout<<"List "<<i<<": ";
        for(int val: adj[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}