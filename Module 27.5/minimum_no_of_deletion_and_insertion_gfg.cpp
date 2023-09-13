//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string a, string b) 
	{ 
	    // Your code goes here
	    int n = a.size();
	    int m = b.size();
	    int dp[n + 1][m + 1];
	    
	    for(int i = 0; i <= n; i++){
	        for(int j = 0; j <= m; j++){
	            if(i == 0 or j == 0) dp[i][j] = 0;
	        }
	    }
	    for(int i = 1; i <= n; i++){
	        for(int j = 1; j <= m; j++){
	            if(a[i - 1] == b[j - 1]){
	                dp[i][j] = dp[i - 1][j - 1] + 1;
	            }
	            else{
	                dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
	            }
	        }
	    }
	    int deletion = n - dp[n][m];
	    int insertion = m - dp[n][m];
	    int totalNoOfOperation = deletion + insertion;
	    return totalNoOfOperation;
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends