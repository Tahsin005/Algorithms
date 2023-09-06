#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int n,x;
int v[21];

bool solve(ll sum,int index){
    if(index == n){
        return sum == x;
    }
    bool choice1 = solve(sum + v[index],index + 1);
    bool choice2 = solve(sum - v[index],index + 1);
    
    return choice1 or choice2;
}
int main(){
    Tahsin
    cin>>n>>x;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    if(solve(v[0],1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}