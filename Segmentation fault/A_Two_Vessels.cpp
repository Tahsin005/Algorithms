#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx = max(a,b);
        int mn = min(a,b);
        int diff = abs(mx - mn);
        if(diff == 0){
            cout<<0<<endl;
        }
        else{
            float s = (float)diff / (float)c;
            float s1 = ceil(s);
            float f = s1 / 2;
            float ans = ceil(f);
            cout<<ans<<endl;
        }
    }
    return 0;
}