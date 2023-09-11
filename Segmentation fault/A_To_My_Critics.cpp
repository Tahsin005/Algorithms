#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int flag = 0;
        if(a + b >= 10){
            flag = 1;
        }
        else if(a + c >= 10){
            flag = 1;
        }
        else if(b + c >= 10){
            flag = 1;
        }

        (flag == 1)? cout<<"YES"<<endl: cout<<"NO"<<endl;
    }
    return 0;
}