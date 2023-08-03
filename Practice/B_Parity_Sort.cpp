// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define Faster ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    
    vector<bool> isOdd(n,false);
    vector<int> odd,even;
    for(int i = 0; i < n; i++){
        if(v[i] % 2 != 0){
            isOdd[i] = true;
            odd.push_back(v[i]);
        }
        else{
            even.push_back(v[i]);
        }
    }
    sort(odd.begin(),odd.end(),greater<int>());
    sort(even.begin(),even.end(),greater<int>());

    for(int i = 0; i < n; i++){
        if(isOdd[i]){
            v[i] = odd.back();
            odd.pop_back();
        }
        else{
            v[i] = even.back();
            even.pop_back();
        }
    }
    if(is_sorted(v.begin(),v.end())) yes
    else no
}
int main(){
    Faster
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}