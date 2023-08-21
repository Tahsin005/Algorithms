#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void merge(int a[],int l,int m,int r){
    int leftSize = m - l + 1;
    int rightSize = r - m;
    int L[leftSize],R[rightSize];
    int k = 0;
    for(int i = l; i <= m; i++){
        L[k] = a[i];
        k++;
    }
    k = 0;
    for(int i = m + 1; i <= r; i++){ 
        R[k] = a[i];
        k++;
    }
    int i = 0,j = 0;
    int curr = l;
    while(i < leftSize and j < rightSize){
        if(L[i] <= R[j]){
            a[curr] = L[i];
            i++;
        }
        else{
            a[curr] = R[j];
            j++;
        }
        curr++;
    }
    while(i < leftSize){
        a[curr] = L[i];
        i++;
        curr++;
    }
    while(j < rightSize){
        a[curr] = R[j];
        j++;
        curr++;
    }

}
void merge_sort(int a[], int l, int r){
    for(int i = l; i <= r; i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
    if(l < r){
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a,l,mid,r);
    }
}
int main(){
    Faster
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    merge(a,0,3,n - 1);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}