#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char a[8][8];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin>>a[i][j];
            }
        }
        vector<char> v;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(a[i][j] >= 'a' and a[i][j] <= 'z'){
                    v.push_back(a[i][j]);
                }
            }
        }
        for(char ch: v){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}