#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    string s;
    cin>>s;transform(s.begin(),s.end(),s.begin(),::toupper);
    
    cout<<s<<endl;
    if(s.length() < 26){
        cout<<"No"<<endl;
    }
    else{
        set<char> ans;
        // for(int i = 0; i < s.length(); i++){
        //     if(s[i] >= 'A' and s[i] <= 'Z'){
        //         char ch = s[i] - 32;
        //         ans.insert(ch);
        //     }
        //     else if(s[i] >= 'a' and s[i] <= 'z'){
        //         ans.insert(s[i]);
        //     }
        // }
        for(auto ch:s){
            ans.insert(ch);
        }
        // cout<<ans.size()<<endl;
        if(ans.size() == 26){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}