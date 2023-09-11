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
//     int ans = 0;
//     void traverse(TreeNode* root,vector<int> path){
//         if(root == nullptr){
//             return;
//         }
//         path.push_back(root->val);
//         int base = 1;
//         if(root->left == NULL && root->right == NULL){
//             for(int i = path.size() - 1; i >= 0; i--){
//                 ans = ans + (path[i] * base);
//                 base *= 2;
//             }
//         }
//         traverse(root->left,path);
//         traverse(root->right,path);

//         path.pop_back();
//     }
//     int sumRootToLeaf(TreeNode* root) {
//         vector<int> path;
//         traverse(root,path);
//         return ans;
//     }
// };
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */




/*
Another solution
*/

// class Solution {
// public:
//     void sum(vector<int> &path,int &ans){
//         int base = 1;
//         for(int i = path.size() - 1; i >= 0; i--){
//             ans = ans + (path[i] * base);
//             base *= 2;
//         }
//     }
//     void traverse(TreeNode* root,vector<int> &path,int &ans){
//         if(root == nullptr){
//             return;
//         }
//         path.push_back(root->val);
//         if(root->left == NULL && root->right == NULL){
//             sum(path,ans);
//         }
//         traverse(root->left,path,ans);
//         traverse(root->right,path,ans);

//         path.pop_back();
//     }
//     int sumRootToLeaf(TreeNode* root) {
//         int ans = 0;
//         vector<int> path;
//         traverse(root,path,ans);
//         return ans;
//     }
// };