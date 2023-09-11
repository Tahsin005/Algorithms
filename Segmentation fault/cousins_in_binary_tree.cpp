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
//     bool isCousins(TreeNode* root, int x, int y) {
//         queue<pair<int,pair<TreeNode*,int>>> q;
//         q.push({-1,{root,0}});
//         pair<int,pair<TreeNode*,int>> p1;
//         pair<int,pair<TreeNode*,int>> p2;
//         while(!q.empty()){
//             pair<int,pair<TreeNode*,int>> pr = q.front();
//             int parent = pr.first;
//             TreeNode* node = pr.second.first;
//             int level = pr.second.second;
//             q.pop();
            
//             if(node->val == x){
//                 p1 = {parent,{node,level}};
//             }
//             else if(node->val == y){
//                 p2 = {parent,{node,level}};
//             }
//             if(node->left) q.push({node->val,{node->left,level + 1}});
//             if(node->right) q.push({node->val,{node->right,level + 1}});
//         }
//         if((p1.second.second == p2.second.second) && (p1.first != p2.first)){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };