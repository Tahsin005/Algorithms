#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1; i <=t; i++){
        string s;
        cin>>s;
        int cnt=0;
        vector<int> v;
        int mx=INT_MIN;
 
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='1'){
                cnt++;
            }
            else{
                if(cnt!=0) v.push_back(cnt);
                cnt=0;
            }
        }
        if(cnt!=0) v.push_back(cnt);
 
        if(v.empty()) v.push_back(0);
 
        sort(v.begin(),v.end(),greater<int>());
 
        long long int sum =0;
        for(int i = 0; i < v.size(); i++){
            if(i%2==0) sum += v[i];
        }
 
        cout<<sum<<endl;
 
    }
 
 
    return 0;
}