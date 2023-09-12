//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int dp[1005][1005];
    long long int count(int w[], int N, int sum) {

        // code here.
        int n = N,s = sum;
        dp[0][0] = 1;
        for(int i = 1; i <= s; i++){
            dp[0][i] = 0;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= s; j++){
                if(w[i - 1] <= j){
                    long long int op1 = dp[i][j - w[i - 1]];
                    long long int op2 = dp[i - 1][j];
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
        // cout<<dp[n][s]<<endl;
        return dp[n][s];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends