#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i < n; i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int l = 0,r = n - 1;
    bool flag = false;
    int index = 0;
    while(l <= r){
        int mid_index = (l + r) / 2;
        if(a[mid_index] == k){
            index = mid_index;
            flag = true;
            break;
        }   
        if(k > a[mid_index]){
            l = mid_index + 1;
        }
        else{
            r = mid_index - 1;
        }
    }
    if(flag == true) cout<<index<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}