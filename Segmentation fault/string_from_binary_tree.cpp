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
//     void preorder(TreeNode* root,string &s){
//         if(root == NULL){
//             return;
//         }
//         if(root->val >= 0){
//             s += to_string(root->val);
//         }
//         else if(root->val < 0){
//             s += to_string(root->val);
//         }

//         if(root->left != NULL){
//             if(root->left == NULL && root->right != NULL){
//                 s.push_back('(');
//                 s.push_back(')');
//             }
//             s.push_back('(');
//             preorder(root->left,s);
//             s.push_back(')');
//         }
//         if(root->right != NULL){
//             if(root->left == NULL && root->right != NULL){
//                 s.push_back('(');
//                 s.push_back(')');
//             }
//             s.push_back('(');
//             preorder(root->right,s);    
//             s.push_back(')');
//         }
//     }
//     string tree2str(TreeNode* root) {
//         string s = "";
//         preorder(root,s);
//         return s;
//     }
// };