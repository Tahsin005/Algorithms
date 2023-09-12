#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    string a,b;
    cin>>a>>b;
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
                dp[i][j] = max(dp[i][j - 1],dp[i - 1][j]);
            }
        } 
    }
    int deletion = n - dp[n][m];
    int insertion = m - dp[n][m];
    int noOfOperation = deletion + insertion;
    cout<<noOfOperation<<endl;
    return 0;
}