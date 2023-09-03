#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const ll N = 1e7 +7;
// vector<bool> visited(N,false);
bool visited[N] = {false};
int main(){
    Tahsin
    ll t;
    cin >> t;
    while(t--)
    {   
        ll n, k;
        cin >> n >> k;
        vector<ll> v1(n);
        vector<ll> v2(n);
        vector<ll> ans;
        for(ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for(ll i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        // sort(v2.begin(),v2.end());
        ll p = 0;
        ll q= 0;
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < n; j++)
            {
                // if(visited[j] == true) continue;
                if(abs(v1[i] - v2[j]) <= k and !visited[j])
                {
                    ans.push_back(v2[j]);
                    visited[j] = true;
                    break;
                }
            }
        }
        for(auto val : ans)
        {
            cout << val << " ";
        }
        // for(auto val: v1){
        //     cout<<val<< " ";
        // }
        // cout<<endl;
        // for(auto val: v2){
        //     cout<<val<< " ";
        // }
        cout<<endl;
        // memset(visited,false,n);
        for(ll  i = 0; i < n; i++){
            visited[i] = false;
        }
        ans.clear();
    }
    return 0;
}