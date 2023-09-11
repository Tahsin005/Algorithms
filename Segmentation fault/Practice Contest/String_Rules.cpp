#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string substring = "";
    string ans = "";
    int x = 0;
    queue<char> q;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' and s[i] <= '9'){
            x = s[i] - '0';
        }
        else if(s[i] >= 'a' and s[i] <= 'z'){
            substring.push_back(s[i]);
        }
        else{
            for(int j = 0; j < x; j++){
                // ans = ans + substring;
                ans.append(substring);
            }
            ans.push_back(s[i]);
            substring.clear();
        }
    }
    for(int j = 0; j < x; j++){
        ans.append(substring);
    }
    for(int i = 0; i < ans.length(); i++){
        cout<<ans[i];
    }
    return 0;
}