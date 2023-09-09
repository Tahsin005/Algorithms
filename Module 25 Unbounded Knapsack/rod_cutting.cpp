#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1005;
int dp[N][N];
int rod_cutting(int n,int s,int val[],int weight[]){
    if(n == 0 or s == 0) return 0;
    
    if(dp[n][s] != -1) return dp[n][s];
    if(weight[n - 1] <= s){
        int choice1 = val[n - 1] + rod_cutting(n,s - weight[n - 1],val,weight);
        int choice2 = rod_cutting(n - 1,s,val,weight);
        return dp[n][s] = max(choice1,choice2);
    }
    else{
        return dp[n][s] = rod_cutting(n - 1,s,val,weight);
    }
}
/*
8
2 4 4 5 8 10 12 9

Output = 16 (taking all the weights with 2)
*/
int main(){
    Tahsin
    int n;
    cin>>n;
    int val[n],weight[n];
    for(int i = 0; i < n; i++){
        cin>>val[i];
        weight[i] = i + 1;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            dp[i][j] = -1;
        }
    }
    cout<<rod_cutting(n,n,val,weight)<<endl;
    return 0;
}