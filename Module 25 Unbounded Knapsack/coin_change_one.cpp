#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int dp[1005][1005];
int coin_change(int n,int w[],int s){
    if(n == 0){
        if(s == 0) return 1;
        else return 0;
    }
    if(dp[n][s] != -1) return dp[n][s];
    if(w[n - 1] <= s){
        int op1 = coin_change(n, w, s - w[n - 1]);
        int op2 = coin_change(n - 1, w, s);
        return dp[n][s] = op1 + op2;
    }
    else{
        return dp[n][s] = coin_change(n - 1, w, s);
    }
}
/*
3
1 2 3
5

output = 5
*/
int main(){
    Tahsin
    /*
    Count of subset sum for unbounded knapsack

    How many ways we can get the value (s)?
    */
    int n;
    cin>>n;
    int w[n];
    for(int i = 0; i < n; i++){
        cin>>w[i];
    }
    int s;
    cin>>s;
    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= s; j++){
    //         dp[i][j] = -1;  
    //         // cout<<dp[i][j]<<" ";
    //     }
    //     // cout<<endl;
    // }
    // cout<<coin_change(n,w,s);
    dp[0][0] = 1;
    for(int i = 1; i <= s; i++){
        dp[0][i] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= s; j++){
            if(w[i - 1] <= j){
                int op1 = dp[i][j - w[i - 1]];
                int op2 = dp[i - 1][j];
                dp[i][j] = op1 + op2;
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= s; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[n][s]<<endl;
    return 0;
}