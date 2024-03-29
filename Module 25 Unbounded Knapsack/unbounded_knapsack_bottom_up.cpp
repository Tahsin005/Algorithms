#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    /*
    4 6
    5 3 2 4
    4 1 3 2

    Output = 18
    */
    int n,s;
    cin>>n>>s;
    int val[n],weight[n];
    int dp[n + 1][s + 1];
    for(int i = 0; i < n; i++){
        cin>>val[i];
    }
    for(int i = 0; i < n; i++){
        cin>>weight[i];
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= s; j++){
            if(i == 0 or j == 0) dp[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= s; j++){
            if(weight[ i - 1] <= j){
                dp[i][j] = max(val[i - 1] + dp[i][j - weight[i - 1]],dp[i - 1][j]);
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout<<dp[n][s]<<endl;
    return 0;
}