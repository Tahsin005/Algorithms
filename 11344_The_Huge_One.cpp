#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isDivisible(string s,int n){
    int sum = 0, x = 0;
    for(int i = 0; i < s.length(); i++){
        x = s[i] - '0';
        sum = sum * 10 + x;
        sum %= n;
    }
    if(sum == 0) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string m;
        int sz;
        cin>>m;
        cin>>sz;

        vector<int> v(sz);
        for(int i = 0; i < sz; i++){
            cin>>v[i];
        }
        bool flag = true;
        for(int val: v){
            if(!isDivisible(m,val)){
                flag = false;
                break;
            }
        }
        if(flag) cout<<m<<" - Wonderful."<<endl;
        else cout<<m<<" - Simple."<<endl;
    }
    return 0;
}