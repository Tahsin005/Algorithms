#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m = n;
        int maxidx = -1;
        int mx;
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
            cin>>b[i];
        }
        for(int i = 0; i < n; i++){
            if(a[i] > 10){
                b[i] = -1;
            }
        }
        mx = INT_MIN;
        for(int j = 0; j < n; j++){
            if(b[j] > mx){
                mx = b[j];
                maxidx = j;
            }
        }
        cout<<maxidx + 1<<endl;
    }
    return 0;
}