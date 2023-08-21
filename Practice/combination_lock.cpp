#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    while(true){
        int dialPos,comb1,comb2,comb3;
        cin>>dialPos>>comb1>>comb2>>comb3;
        
        if(dialPos == 0 && comb1 == 0 && comb2 == 0 && comb3 == 0){
            break;
        }
        int ans = 0;

        int diff1 = abs(dialPos - comb1);
        ans += (40 - diff1) * 9;// 1 number clockwise

        int diff2 = abs(comb2 - comb1);
        ans += (40 - diff2) * 9;// 2nd number counter-clockwise
        
        int diff3 = abs(comb3 - comb2);
        ans += (40 - diff3) * 9;// 3rd number clockwise
        
        cout<<720 + 360 + ans<<endl;
    }
    return 0;
}