//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends


int minDeletions(string a, int n) { 
    //complete the function here 
    // int n = a.size();
    string b = a;
    reverse(b.begin(),b.end());
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
	return n - dp[n][m];
} 