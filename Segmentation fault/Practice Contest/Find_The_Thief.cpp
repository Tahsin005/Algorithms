#include<bits/stdc++.h>
using namespace std;
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
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[v[i]]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second % 2 != 0){
                cout<<it->first<<endl;
                break;
            }
        }
    }
    return 0;
}