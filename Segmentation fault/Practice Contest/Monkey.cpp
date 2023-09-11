#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        char cnt[26] = {0};
        for(int i = 0; i < s.length();i++){
            int val = s[i] - 97;
            cnt[val]++;
        }
        for(char ch = 'a'; ch <= 'z'; ch++){
            if(cnt[ch - 97] > 0){
                for(int k = 0; k < cnt[ch - 97]; k++){
                    cout<<ch;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}