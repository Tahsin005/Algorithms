#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e5+7;
int a[N];
void merge(int l,int r,int mid){
    int leftsize = mid - l + 1;
    int left[leftsize + 1];

    int rightsize = r - (mid + 1) + 1;
    int right[rightsize + 1];

    for(int i = l,j = 0; i <= mid; i++,j++){
        left[j] = a[i];
    }
    for(int i = mid + 1,j = 0; i <= r; i++,j++){
        right[j] = a[i];
    }

    left[leftsize] = INT_MAX;
    right[rightsize] = INT_MAX;

    int lp = 0,rp = 0;
    for(int i = l; i <= r; i++){
        if(left[lp] <= right[rp]){
            a[i] = left[lp];
            lp++;
        }
        else{
            a[i] = right[rp];
            rp++;
        }
    }
}
void mergesort(int l,int r){
    if(l == r) return;
    int mid = (l + r) / 2;
    mergesort(l,mid);
    mergesort(mid + 1,r);
    merge(l,r,mid);
}
int main(){
    Faster
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    mergesort(0,n - 1);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}