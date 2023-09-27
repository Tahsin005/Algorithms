#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
class ABC{
    int x;

    public:
    
    void set(int x){
        this->x = x;
    }
    int get(){
        return x;
    }
};
int main(){
    Tahsin
    /*
        encapsulation means biding of variables
        and methods into a single unit

        how do we do that?
        - by making the data only accessable from
        the class methods
    */
    ABC obj1;
    obj1.set(1068);
    cout<<obj1.get()<<endl;
    return 0;
}