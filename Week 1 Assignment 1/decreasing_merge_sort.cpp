#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e5+7;
int num[N];

void merge(int l,int r,int mid){
    int l_sz = mid - l + 1;
    int left[l_sz + 1];

    int r_sz = r - (mid + 1) + 1;
    int right[r_sz + 1];

    for(int i = l,j = 0; i <= mid; i++,j++){
        left[j] = num[i];
    }
    for(int i = mid + 1,j = 0; i <= r; i++,j++){
        right[j] = num[i];
    }

    left[l_sz] = INT_MIN;
    right[r_sz] = INT_MIN;

    int lp = 0;
    int rp = 0;
    for(int i = l; i <= r; i++){
        if(left[lp] >= right[rp]){
            num[i] = left[lp];
            lp++;
        }
        else{
            num[i] = right[rp];
            rp++;
        }
    }
}
void mergesort(int l,int r){
    if(l == r) return;
    int mid = (l + r) / 2;
    mergesort(l,mid);
    mergesort(mid + 1, r);
    merge(l,r,mid);
}
int main(){
    Faster
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>num[i];
    }

    mergesort(0,n - 1);
    for(int i = 0; i < n; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}