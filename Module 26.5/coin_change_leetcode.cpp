#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




class Solution {
public:
    int coinChange(vector<int>& w, int s) {
        int n = w.size();
        int dp[n + 1][s + 1];
        dp[0][0] = 0;
        for(int i = 1; i <= s; i++){
            dp[0][i] = INT_MAX - 1;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= s; j++){
                if(w[i - 1] <= j){
                    // int op1 = dp[i][j - w[i - 1]] + 1;
                    // int op2 = dp[i - 1][j];
                    dp[i][j] = min(1 + dp[i][j - w[i - 1]],dp[i - 1][j]);
                }
                else{
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if(dp[n][s] == INT_MAX - 1) return -1;
        else return dp[n][s];
    }
};















int main(){
    Tahsin
    
    return 0;
}