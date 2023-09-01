#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    unordered_set<int> s1;
    s1.insert(2);
    s1.insert(8);
    s1.insert(3);
    s1.insert(33);
    s1.insert(2);
    s1.insert(98);
    s1.insert(11);
    for(auto val: s1){
        cout<<val<<" ";
    }
    return 0;
}