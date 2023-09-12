#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        int l = 0;
        int r = v.size() - 1;
        while(l <= r){
            int pro = 1;
            for(int i = l; i <= r; i++){
                pro *= v[i];
            }
            vector<int> in;
            for(int j = 0; j < l; j++){
                in.push_back(v[j]);
            }
            in.push_back(pro);
            for(int k = r + 1; k < n; k++){
                in.push_back(v[k]);
            }

            // if(v[l] > v[r]){
            //     r--;
                
            // } 
            // else{
            //     l++;
            // }
            r-- , l++;
            for(int val: in){
                cout<<val<<" ";
            } cout<<endl;
        }
    }
    return 0;
}