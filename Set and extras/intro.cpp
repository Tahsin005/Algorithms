#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    set<int> s1;// by default values are stored in ascending order
    // set<int,greater<int>> s1;
    while(true){
        int x;
        cin>>x;
        if(x == -1) break;
        else s1.insert(x);
    }
    for(auto it = s1.begin(); it != s1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // Deleting element from a set
    // auto it = s1.begin();
    // advance(it,2); // to move the iterator 
    // s1.erase(it);
    // s1.erase(s1.begin(),s1.end());;

    auto start_it = s1.begin();
    start_it++;

    auto end_it = s1.begin();
    advance(end_it,3);
    s1.erase(start_it,end_it); // for deleteing  in range, erase function
    // doesn't delete the last iterator
    for(auto val: s1){
        cout<<val<<" ";
    }
    cout<<"\n";
    auto it = s1.find(2);
    if(it != s1.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    // cout<<s1.max_size()<<endl; 
    return 0;
} 