#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    int n;
    cin>>n;
    set<string> s1;
    cin.ignore();
    while(n--){
        string s;
        cin>>s;
        s1.insert(s);
    }
    for(auto it = s1.begin(); it != s1.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}