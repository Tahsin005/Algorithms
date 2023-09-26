#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1){
                cout<<j;
            }
            else if(i == n){
                cout<<n;
            }
            else{
                if(j == 1){
                    cout<<i;
                }
                else if(j == n){
                    cout<<n;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}