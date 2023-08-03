#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> v;
    for(int val: nums1){
        v.push_back(val);
    }
    nums1.clear();
    while(i < n && j < m){
        if(v[i] >= nums2[j]){
            nums1.push_back(v[i]);
            i++;
        }
        else if(v[i] <= nums2[j]){
            nums1.push_back(nums2[j]);
            j++;
        }
    }
    while(i < n){
        nums1.push_back(v[i]);
        i++;
    }
    while(j < m){
        nums1.push_back(nums2[j]);
        j++;
    }
}
int main(){
    Faster
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++) cin>>v1[i];

    int m;
    cin>>m;
    vector<int> v2(m);
    for(int i = 0; i < n; i++) cin>>v2[i];

    merge(v1,n,v2,m);

    for(int val: v1){
        cout<<val<<" ";
    }
    return 0;
}