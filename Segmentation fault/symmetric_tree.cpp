// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void lst(TreeNode* root,vector<int> &v){
//         if(root == NULL){
//             return;
//         }
//         v.push_back(root->val);
//         if(root->right == NULL) v.push_back(0);
//         lst(root->left,v);
//         lst(root->right,v);
//     }
//     void rst(TreeNode* root,vector<int> &v){
//         if(root == NULL){
//             return;
//         }
//         v.push_back(root->val);
//         if(root->left == NULL) v.push_back(0);
//         rst(root->right,v);
//         rst(root->left,v);
//     }
//     bool isSymmetric(TreeNode* root) {
//         vector<int> v1,v2;
//         v1.push_back(root->val);
//         v2.push_back(root->val);
//         if(root->left != NULL && root->right != NULL){
//             lst(root->left,v1);
//             rst(root->right,v2);
//         }
//         else if(root->left == NULL && root->right != NULL){
//             return false;
//         }
//         else if(root->right == NULL && root->left != NULL){
//             return false;
//         }
//         for(int data: v1){
//             cout<<data<<" ";
//         }

//         cout<<endl;

//         for(int data: v2){
//             cout<<data<<" ";
//         }
//         if(v1.size() != v2.size()){
//             return false;
//         }
//         else{
//             bool flag = true;
//             for(int i = 0; i < v1.size(); i++){
//                 if(v1[i] != v2[i]){
//                     flag = false;
//                     break;
//                 }
//             }
//             return flag;
//         }
//     }
// };