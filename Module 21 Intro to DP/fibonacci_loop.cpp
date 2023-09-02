#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    ll n;
    cin>>n;
    ll a[n + 1];
    a[0] = 1;
    a[1] = 1;
    for(ll i = 2; i <= n; i++){ // O(n)
        a[i] = a[i - 1] + a[i - 2];
    }
    cout<<a[n]<<endl;
    return 0;
}