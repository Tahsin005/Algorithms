#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Rectangle{
    public:
        int l;
        int b;

        Rectangle(){ // Default Constructor
            l = 0;
            b = 0;
        }
        Rectangle(int x,int y){ // Parameterized Constructor
            l = x;
            b = y;
        }
        Rectangle(Rectangle& r){ // Copy Constructor - initialize an obj by another existing obj 
            l = r.l;
            b = r.b;
        }

        ~Rectangle(){ // Destructor
            cout<<"Destructor is called"<<endl; 
        }
};

int main(){
    Rectangle *r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    // Rectangle r1;
    // cout<<r1.l<<" "<<r1.b<<endl;

    Rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}