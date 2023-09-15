#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int dp[1005][1005];
bool subset_sum(int n,int a[],int s){
    if(n == 0){
        if(s == 0) return true;
        else return false;
    }
    if(dp[n][s] != -1) return dp[n][s];
    if(a[n - 1] <= s){
        bool op1 = subset_sum(n, a, s - a[n - 1]);
        bool op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 or op2;
    }
    else{
        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int s = 1000 - m;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= s; j++){
                dp[i][j] = -1;  
            }
        }
        if(subset_sum(n,a,s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}