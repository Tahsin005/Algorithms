#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
ll dp[N];
bool solve(ll s, ll target){
    if(s == target) return true;
    else if(s > target) return false;

    if(dp[s] != -1) return dp[s];
    bool op1 = solve(s + 3, target);
    bool op2 = solve(s * 2, target);
    return dp[s] = op1 or op2;
}
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(int i = 0; i < n; i++){
            dp[i] = -1;
        }
        if(n == 1) cout<<"YES"<<endl;
        else{
            if(solve(1, n)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}