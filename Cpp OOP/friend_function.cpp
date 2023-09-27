#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
class A{
    int x;
    
    public:
        A(int y){
            x = y;
        }
        friend void print(A &obj);
};

void print(A &obj){
    cout<<obj.x<<endl;
}
int main(){
    Tahsin
    A obj(10);

    print(obj);
    return 0;
}