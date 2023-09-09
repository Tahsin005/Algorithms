#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1005;
int dp[N][N];
int unbounded_knapsack(int n,int s,int val[],int weight[]){
    if(n == 0 or s == 0) return 0;
    
    if(dp[n][s] != -1) return dp[n][s];
    if(weight[n - 1] <= s){
        int choice1 = val[n - 1] + unbounded_knapsack(n,s - weight[n - 1],val,weight);
        int choice2 = unbounded_knapsack(n - 1,s,val,weight);
        return dp[n][s] = max(choice1,choice2);
    }
    else{
        return dp[n][s] = unbounded_knapsack(n - 1,s,val,weight);
    }
}
    /*
    4 6
    5 3 2 4
    4 1 3 2

    Output = 18
    */
int main(){
    Tahsin
    int n,s;
    cin>>n>>s;
    int val[n],weight[n];
    for(int i = 0; i < n; i++){
        cin>>val[i];
    }
    for(int i = 0; i < n; i++){
        cin>>weight[i];
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= s; j++){
            dp[i][j] = -1;
        }
    }
    cout<<unbounded_knapsack(n,s,val,weight)<<endl;
    return 0;
}