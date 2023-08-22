#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    vector<int> v;
    while(true){
        int x;
        cin>>x;
        if(x == -1) break;
        v.push_back(x);
    }
    cout<<"Total element in data set : "<<v.size()<<endl;
    sort(v.begin(),v.end());
    cout<<"Element in ascending order : "<<endl;
    int n = v.size();
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;
    int i = 1;
    vector<int> in;
    for(int val: v){
        if(i == ((n + 1) / 2) + 1) break;
        // cout<<val<<" ";
        in.push_back(val);
        i++;
    }
    cout<<endl;
    cout<<in.size()<<endl;
    cout<<in.back()<<endl;
    cout<<endl;
    cout<<i;
    cout<<endl;
    cout<<"Highest value : "<<v.back()<<endl;
    cout<<"Lowest value : "<<v.front()<<endl;
    return 0;
}