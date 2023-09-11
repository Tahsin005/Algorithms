#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n == 1){
        cout<<1;
    }
    else if(n == 2){
        cout<<2;
    }
    else{
        long long val = 1;
        for(int i = 3; i <= n; i++){
            val = val * 2;
        }
        long long nodes = 2;
        for(int j = 3; j <= n; j++){
            nodes = nodes * 2;
        }
        cout<<nodes * val;
    }
    return 0;
}