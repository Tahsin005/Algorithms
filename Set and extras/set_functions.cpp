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
    for(auto it = s1.rbegin(); it != s1.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // cout<<*s1.lower_bound(20);
    // cout<<endl;
    /*Lower bound function will return the position if the value is present,
    or will return the next greater value*/

    // cout<<*s1.upper_bound(20);
    /*Upper bound function will always return the next greater value 
    even it is present in the set*/
    return 0;
}