#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class Fruit{
    public:
        string name;
        string color;
};
int main(){
    Tahsin
    Fruit apple;
    apple.color = "Red";
    apple.name = "Apple";
    cout<<apple.name<<" - "<<apple.color<<endl;

    Fruit *mango = new Fruit();
    mango->color = "Yellow";
    mango->name = "Mango";
    cout<<mango->name<<" - "<<mango->color<<endl;
    return 0;
}