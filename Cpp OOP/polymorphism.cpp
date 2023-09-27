#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/*
    Ability of objects / methods to take different form
*/

// Compile time polymorphism - method overloading
class Sum{
    public:

        // Function Overloading
        void add(int x,int y){
            int sum = x + y;
            cout<<sum<<endl;
        }
        void add(int x,int y,int z){
            int sum = x + y + z;
            cout<<sum<<endl;
        }
        void add(float x,float y){
            float sum = x + y;
            cout<<sum<<endl;
        }
};
int main(){
    Tahsin
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add((float)2.3, (float)2.7);
    return 0;
}