#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void level_order(Node* root,vector<int> &res){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        res.push_back(f->val);

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
int main(){
    Node* root = input_tree();
    vector<int> v;
    level_order(root,v);
    int q;
    cin>>q;
    while(q--){
        int n1;
        cin>>n1;
        if(n1 == 1){
            int n2;
            cin>>n2;
            v.push_back(n2);
        }
        else if(n1 == 2){
            sort(v.begin(),v.end());
            int n = v.size();
            cout<<v[n - 1]<<endl;
            v.resize(n - 1);
        }
    }
    return 0;
}