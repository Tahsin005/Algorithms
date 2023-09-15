#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    while(1){
        cin>>s;
        if(s[0] == '0' && s.length() == 1) break;
        int sum = 0, x = 0;
        for(int i = 0; i < s.length(); i++){
            x = s[i] - '0';
            sum = sum * 10 + x;
            sum %= 11;
            cout<<sum<<endl;
        }
        if(sum == 0) cout<<s<<" is a multiple of 11."<<endl;
        else cout<<s<<" is not a multiple of 11."<<endl;
    }
    return 0;
}