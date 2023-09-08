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
        int cnt = 0;
        int track;
        while(true){
            track = mx - mn;
            if(track >= c){
                mx = mx - c;
                mn = mn + c;
                cnt++;
            }
            else{
                break;
            }
        }
        if(track > 0) cout<<cnt + 1<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}