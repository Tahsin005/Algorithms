#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    int a[] = {1,2,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    // cout<<find(a,a + n,4) - a<<endl; // finds the index of specific element
    // cout<<binary_search(a,a + n,8)<<endl;

    // cout<<lower_bound(a,a + n,2) - a<<endl;
    // it returns address of the first occurence of an element,
    // if you minus the base address of array, you will get the index;

    // cout<<upper_bound(a,a + n,2) - a - 1;
    // return the address of the next greater element in the list 
    // in this eg: it returns the address of 3 (because we are searching the 
    // upper_bound for 2);
    return 0;
}