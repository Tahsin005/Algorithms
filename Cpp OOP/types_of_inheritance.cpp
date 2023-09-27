#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class Parent1{
    public:
        Parent1(){
            cout<<"Parent1 Class"<<endl;
        }
};

class Parent2{
    public:
        Parent2(){
            cout<<"Parent2 Class"<<endl;
        }
};

// Single Level Inheritance
class Child1: public Parent1{
    public:
        Child1(){
            cout<<"Child1 Class"<<endl;
        }
};

// Multi-level Inheritance
class GrandChild: public Child1{
    public:
        GrandChild(){
            cout<<"Grand Child Class"<<endl;
        }
};

// Multiple Inheritance
class Child2: public Parent1, public Parent2{
    public:
        Child2(){
            cout<<"Child2 Class"<<endl;
        }
};

// Hierarchical Inheritance
/*
    When two child classes inherit properties from the same parent class , is called hierarchical 
    inheritance
*/

class H1_child: public Parent1{
    public:
        H1_child(){
            cout<<"H1_child Class inherited from the Parent1 Class"<<endl;
        }
};
class H2_child: public Parent1{
    public:
        H2_child(){
            cout<<"H2_child Class inherited from the Parent1 Class"<<endl;
        }
};

/*
    Hybird Inheirtance
    - Combination of more than 1 types of class

                    class A
                    |      |
            class B        class C
                              |      
                            class D        
    In this example, we can see hierarchical inheirtance between class B and class C
    and we can see multilevel inheritance between class C and class D
*/
int main(){
    Tahsin
    // Child1 c1; // Single Inheritance
    // GrandChild gc; // Multi-level Inheritance

    // Child2 c2; // Multiple Inheritance

    // Hierarchical Inheritacne
    H1_child h1;
    H2_child h2;

    // Hybrid Inheritacne

    return 0;
}