#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int n;
    cin>>n;
    int s = 0;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        s += a[i];
    }
    if(s % 2 != 0){
        cout<<"NO"<<endl;
    }
    else{
        int sum = s / 2;
        bool dp[n + 1][sum + 1];
        dp[0][0] = true;
        for(int i = 1; i <= sum; i++){
            dp[0][i] = false;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= sum; j++){
                if(a[i - 1] <= sum){
                    dp[i][j] = dp[i - 1][j - a[i - 1]]  or dp[i - 1][j];
                }
                else{
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if(dp[n][sum]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}