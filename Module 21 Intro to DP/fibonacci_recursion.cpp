#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int fibo(int n){
    if(n == 0 or n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main(){
    Faster
    int n;
    cin>>n;
    int ans = fibo(n); // Time complexity O(2 ^ n)
    cout<<ans<<endl;
    return 0;
}