//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[1005][1005];
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
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int n = N,s = W;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= s; j++){
                dp[i][j] = -1;
            }
        }
        return unbounded_knapsack(n,s,val,wt);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends