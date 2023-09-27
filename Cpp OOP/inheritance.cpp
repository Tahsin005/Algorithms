#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class Parent{
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};

class Child1: public Parent{
    // x will be public
    // y will be protected
    // z will be inaccessible
};

class Child2: private Parent{
    // x will be private
    // y will be private
    // z will be inaccessible
};

class Child3: protected Parent{
    // x will be protected
    // y will be protected
    // z will be inaccessible
};
int main(){
    Tahsin
    Parent p;
    p.x;


    return 0;
}