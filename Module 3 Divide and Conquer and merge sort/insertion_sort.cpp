#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void insertionsort(vector<int> &v){
    int n = v.size();
    for(int i = 1; i < n; i++){
        int temp = v[i];
        int j = i - 1;
        while(j >= 0 and v[j] > temp){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = temp;
    }
}
int main(){
    Faster
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    insertionsort(v);
    for(int i = 0; i < n; i++) cout<<v[i]<<" ";
    return 0;
}