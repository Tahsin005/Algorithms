#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int dp[1005][1005];
int coin_change(int n,int w[],int s){
    if(n == 0){
        if(s == 0) return 0;
        else return INT_MAX - 1;
    }
    if(dp[n][s] != -1) return dp[n][s];
    if(w[n - 1] <= s){
        int op1 = coin_change(n, w, s - w[n - 1]);
        int op2 = coin_change(n - 1, w, s);
        return dp[n][s] = min(op1 + 1,op2);
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
    what is the minimum number of coins required to
    reach the required value(s)?
    */
    int n;
    cin>>n;
    int w[n];
    for(int i = 0; i < n; i++){
        cin>>w[i];
    }
    int s;
    cin>>s;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= s; j++){
            dp[i][j] = -1;  
        }
    }
    if(coin_change(n,w,s) == INT_MAX - 1) cout<<"Not Possible"<<endl;
    else cout<<coin_change(n,w,s)<<endl;
    // int dp[n + 1][s + 1];
    // dp[0][0] = 0;
    // for(int i = 1; i <= s; i++){
    //     dp[0][i] = INT_MAX - 1;
    // }
    // for(int i = 1; i <= n; i++){
    //     for(int j = 0; j <= s; j++){
    //         if(w[i - 1] <= j){
    //             // int op1 = dp[i][j - w[i - 1]] + 1;
    //             // int op2 = dp[i - 1][j];
    //             dp[i][j] = min(1 + dp[i][j - w[i - 1]],dp[i - 1][j]);
    //         }
    //         else{
    //             dp[i][j] = dp[i - 1][j];
    //         }
    //     }
    // }
    // // for(int i = 0; i <= n; i++){
    // //     for(int j = 0; j <= s; j++){
    // //         cout<<dp[i][j]<<" ";
    // //     }
    // //     cout<<endl;
    // // }
    // if(dp[n][s] == INT_MAX - 1) cout<<"Not Possible"<<endl;
    // else cout<<dp[n][s]<<endl;
    return 0;
}