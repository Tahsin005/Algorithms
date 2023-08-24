#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pi pair<int,int>
int main(){
    Faster
    int e;
    cin>>e;
    priority_queue<pi,vector<pi>,greater<pi>> pq;
    while(e--){
        ll a,b;
        cin>>a>>b;
        pq.push({a,b});
    }
    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}
// 1 2
// 1 4
// 1 5
// 3 2
// 3 4
// 3 5