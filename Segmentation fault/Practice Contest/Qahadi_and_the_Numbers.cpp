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
        sort(v.begin(),v.end());
        int cnt = 0;
        for(int j = 0 ; j < n - 1; j++){
            if(v[j] == v[j + 1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}