#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int first(vector<int> &v, int k){
    int l = 0;
    int r = v.size() - 1;
    int index = INT_MIN;

    while(l <= r){
        int mid = (l + r) / 2;
        if(v[mid] == k){
            index = mid;
            r = mid - 1;
        }
        else if(v[mid] < k){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    return index;
}
int second(vector<int> &v, int k){
    int l = 0;
    int r = v.size() - 1;
    int index = INT_MIN;

    while(l <= r){
        int mid = (l + r) / 2;
        if(v[mid] == k){
            index = mid;
            l = mid + 1;
        }
        else if(v[mid] < k){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    return index;
}

int main(){
    Faster
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin>>v[i];

    int k;
    cin>>k;

    int idx1 = first(v, k);
    int idx2 = second(v, k);
    if(idx2 - idx1 != 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}