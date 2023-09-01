#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    unordered_multiset<int> ums;
    /*
    It can store duplicate values, in ordered fashion.
    All other properties are just like normal set
    */
    ums.insert(2);
    ums.insert(8);
    ums.insert(3);
    ums.insert(33);
    ums.insert(2);
    ums.insert(98);
    ums.insert(11);
    // ums.erase(2);
    for(auto val: ums){
        cout<<val<<" ";
    }cout<<endl;
    // cout<<ums.count(2)<<endl;
    return 0;
}