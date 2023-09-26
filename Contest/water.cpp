#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        int mx = INT_MIN;
        int smx = INT_MIN;
        int l,r;
        for(int i = 0; i < n; i++){
            if(mx < v[i]){
                mx = v[i];
                l = i;
            }
        }
        for(int i = 0; i < n; i++){
            if(smx < v[i] and v[i] != mx){
                smx = v[i];
                r = i;
            }
        }
        if(l > r){
            cout<<r<<" "<<l<<endl;;
        }
        else{
            cout<<l<<" "<<r<<endl;
        }
    }
    return 0;
}