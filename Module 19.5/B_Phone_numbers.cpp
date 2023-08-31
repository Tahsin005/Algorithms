#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    int n;
    cin>>n;
    cin.ignore();
    string s,ans;
    cin>>s;
    
    if(n % 2 == 0){
        for(int i = 0; i < n - 1; i++){
            ans.push_back(s[i]);
            ans.push_back(s[i + 1]);
            ans.push_back('-');
            i++;
        }
    }
    else{
        for(int i = 0; i < n - 1; i++){
            ans.push_back(s[i]);
            ans.push_back(s[i + 1]);
            ans.push_back('-');
            i++;
        }
        ans.erase(ans.end() - 1);
        ans.push_back(s[n - 1]);
        ans.push_back('-');
    }
    ans.erase(ans.end() - 1);
    cout<<ans<<endl;
    return 0;
}