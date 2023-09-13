#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
class Solution {
public:
    bool isSubsequence(string a, string b) {
        int n = a.size();
        int m = b.size();
        if(n == 0 and m == 0) return true;
        int x = 0;
        bool ans = false;
        for(char c: b){
            if(c == a[x]){
                x++;
            }
            if(x == a.size()){
                ans = true;
                break;
            }
        }
        if(ans) return true;
        else return false;
    }
};
int main(){
    Tahsin
    
    return 0;
}