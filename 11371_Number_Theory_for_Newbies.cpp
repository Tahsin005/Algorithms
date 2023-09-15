#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    string s;
    
    while(cin>>s){
        sort(s.begin(), s.end(), greater<char>());
        ll a = stoi(s);

        sort(s.begin(), s.end());
        ll b = stoi(s);

        ll diff = a - b;

        if(diff % 9 == 0){
            cout<<a<<" - "<<b<<" = "<<diff<<" = 9 * "<<diff / 9<<endl;
        }
        else{
            cout<<a<<" - "<<b<<" = "<<diff<<" (not divisible by 9)"<<endl;
        }
    }

    return 0;
}
