#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++){
        cin>>v1[i];
    }
    int m;
    cin>>m;
    vector<int> v2(m);
    for(int i = 0; i < m; i++){
        cin>>v2[i];
    }
    set<int> s;
    for(auto val: v1){
        s.insert(val);
    }
    int sum = 0;
    for(auto val: v2){
        if(s.find(val) != s.end()){
            sum += val;
        }   
    }
    cout<<sum<<endl;
    return 0;
}