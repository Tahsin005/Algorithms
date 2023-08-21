#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    int n,e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    while(e--){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        cout << "Index " << i << " : ";
        for(auto v:adj[i]){
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}