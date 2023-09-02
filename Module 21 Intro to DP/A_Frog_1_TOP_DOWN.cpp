#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
int dp[N];
int solve(int a[],int n){
    if(n == 1){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    else if(n == 2){
        return dp[n] = abs(a[n] - a[n - 1]);
    }
    else{
        int choice1 = solve(a,n - 1) + abs(a[n] - a[n - 1]);
        int choice2 = solve(a,n - 2) + abs(a[n] - a[n - 2]);
        return dp[n] = min(choice1,choice2);
    }
}
int main(){
    Tahsin
    int n;
    cin>>n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        dp[i] = -1;
        cin>>a[i];
    }
    cout<<solve(a,n);

    return 0;
}