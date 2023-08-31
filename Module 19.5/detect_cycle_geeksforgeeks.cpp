#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int find(int n,int par[]){
        while(par[n] != -1){
            n = par[n];
        }
        return n;
    }
    bool dsu_union(int a,int b,int par[],int rank[],int n){
        a = find(a,par);
        b = find(b,par);
        
        if(a == b) return true;
        if(rank[a] > rank[b]){
            par[b] = a;
        }
        else if(rank[b] > rank[a]){
            par[a] = b;
        }
        else{
            rank[a]++;
            par[b] = a;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        int par[V],rank[V];
        for(int i = 0; i < V; i++){
            par[i] = i;
            rank[i] = 1;
        }
        for(int i = 0; i < V; i++){
            for(int j : adj[i]){
                if(i < j and dsu_union(i,j,par,rank,V) == true){
                    return 1;
                }
            }
        }
        return 0;
    }
};
/*
5 5
0 1
1 2
1 4
2 3
3 4
*/
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}