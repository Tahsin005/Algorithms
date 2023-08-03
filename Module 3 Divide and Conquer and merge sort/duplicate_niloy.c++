#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    vector<int> v = {1,1,1,2,2,2,3,4,5,5};
    vector<int> uni;
    int i = 0;
    int j = 1;
    cout<<v.size()<<endl;
    while(j < v.size()){
        if(v[i] != v[j]){
            uni.push_back(v[i]);
            i = j;
            if(i == v.size() - 1) uni.push_back(v[i]);
            j++;
        }
        else if(v[i] == v[j]){
            if(j == v.size() - 1) uni.push_back(v[i]);
            j++;
        }
    }
    for(int val: uni) cout<<val<<" ";
    return 0;
}