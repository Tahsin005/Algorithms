#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
    Base class has multiple parent classes having a common ancestor class
*/

class Parent{
    public:
        Parent(){
            cout<<"Parent Class"<<endl;
        }
};

class Child1: public Parent{
    public:
        Child1(){
            cout<<"Child1 Class"<<endl;
        }
};
class Child2: public Parent{
    public:
        Child2(){
            cout<<"Child2 Class"<<endl;
        }
};

class GrandChild: public Child1, public Child2{
    public:
        GrandChild(){
            cout<<"Grand Child Class"<<endl;
        }
};
int main(){
    Tahsin
    GrandChild gc;
    return 0;
}