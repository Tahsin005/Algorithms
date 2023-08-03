#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int partition(vector<int> &v,int l,int r){
    int pivot = v[l];
    int start = l;
    int end = r;
    while(start < end){
        while(start <= r and v[start] <= pivot){
            start++;
        }
        while(end >= l and v[end] > pivot){
            end--;
        }
        if(start < end){
            swap(v[start],v[end]);
        }
    }
    swap(v[l],v[end]);
    return end;
}
void quicksort(vector<int> &v,int l,int r){
    if(l < r){
        int pos = partition(v,l,r);

        quicksort(v,l,pos - 1);
        quicksort(v,pos + 1,r);
    }
}
int main(){
    Faster
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    quicksort(v,0,n - 1);

    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}