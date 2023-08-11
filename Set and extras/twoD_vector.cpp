#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    int r,c;
    cin>>r>>c;
    vector<vector<int>> v;
    // for(int i = 0; i < r; i++){
    //     vector<int> row;
    //     for(int j = 0; j < c; j++){
    //         row.push_back(rand() % 100 + 1);
    //     }
    //     v.push_back(row);
    //     // row.clear();
    // }
    // for(int i = 0; i < v.size(); i++){
    //     for(int j = 0; j < v[i].size(); j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    v.resize(r,vector<int>(c));
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            v[i][j] = rand() % 100 + 1;
        }
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}