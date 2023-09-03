#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string x ;
        cin >> x;
        set<string> st;
        for(int i = 0; i < n - 1; i++){
            string y = "";
            char ch = x[i];
            char ch1 = x[i + 1];
            y.push_back(ch);
            y.push_back(ch1);
            st.insert(y);
        }
        cout << st.size() << "\n";
    }
    return 0;
}