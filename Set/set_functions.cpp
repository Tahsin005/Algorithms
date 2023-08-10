#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    set<int> s1;
    while(true){
        int x;
        cin>>x;
        if(x == -1) break;
        else s1.insert(x);
    }
    for(auto it = s1.begin(); it != s1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<*s1.lower_bound(20);
    cout<<endl;
    cout<<*s1.upper_bound(20);
    return 0;
}