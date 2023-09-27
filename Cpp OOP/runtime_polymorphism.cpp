#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
    When child class defines a function of parent class, is defined as function
    overriding / runtime polymorphism
*/

class Parent{
    public:
        // We have to use virtual , it will decide which funtion to call 
        // in runtime 
        virtual void print(){
            cout<<"Parent Class"<<endl;
        }
        void show(){
            cout<<"Parent Class"<<endl;
        }
};

class Child: public Parent{
    public:
        void print(){
            cout<<"Child Class"<<endl;
        }
        void show(){
            cout<<"Child Class"<<endl;
        }
};
int main(){
    Tahsin
    Parent *p;
    Child c;

    p = &c;

    p->print();
    p->show();

    return 0;
}