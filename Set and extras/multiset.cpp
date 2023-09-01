#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    // multiset<int> ms;
    multiset<int,greater<int>> ms;
    /*
    It can store duplicate values, in ordered fashion.
    All other properties are just like normal set
    */
    ms.insert(2);
    ms.insert(8);
    ms.insert(3);
    ms.insert(33);
    ms.insert(2);
    ms.insert(98);
    ms.insert(11);
    // ms.erase(2);
    for(auto val: ms){
        cout<<val<<" ";
    }cout<<endl;
    cout<<ms.count(2)<<endl;
    return 0;
}