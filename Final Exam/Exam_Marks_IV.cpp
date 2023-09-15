#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int dp[1005][1005];
const int MOD = 1e9 + 7;
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int w[n];
        for(int i = 0; i < n; i++){
            cin>>w[i];
        }
        int s = 1000 -m;
        dp[0][0] = 1;
        for(int i = 1; i <= s; i++){
            dp[0][i] = 0;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= s; j++){
                if(w[i - 1] <= j){
                    int op1 = dp[i][j - w[i - 1]];
                    int op2 = dp[i - 1][j];
                    dp[i][j] = (op1 + op2) % MOD;
                }
                else{
                    dp[i][j] = dp[i - 1][j]  % MOD;
                }
            }
        }
        cout<<dp[n][s]<<endl;
    }
    return 0;
}