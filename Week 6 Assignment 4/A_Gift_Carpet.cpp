#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<string> carpet;
        for(int i = 0; i < n; i++){
            getchar();
            string x;
            cin>>x;
            carpet.push_back(x);
        }
        string name = "vika";
        string final_name = "";
        int index = 0;
        for(int i = 0; i < m; i++){
            bool flag = false;
            for(int  j = 0; j < n; j++){
                if(carpet[j][i] == name[index]){
                    final_name.push_back(carpet[j][i]);
                    flag = true;
                    break;
                }
            }
            if(flag) index++;
        }
        if(name == final_name) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}