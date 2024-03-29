//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string a, string b, int n, int m)
    {
        // your code here
        int dp[n + 1][m + 1];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i == 0 or j == 0) dp[i][j] = 0;
            }
        }
        for(int i  = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i - 1] == b[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        
        int mx = INT_MIN;
        
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(dp[i][j] > mx){
                    mx = dp[i][j];
                }
                // cout<<dp[i][j]<<" ";
            }
            // cout<<endl;
        }
        return mx;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends