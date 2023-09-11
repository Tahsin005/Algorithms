// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         for(int i = 0; i < matrix.size(); i++){
//             for(int j = 0; j <= i; j++){
//                 // cout<<matrix[i][j]<<" "<<matrix[j][i]
//                 // <<endl;
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         // cout<<endl;
//         for(int i = 0; i < matrix.size(); i++){
//             reverse(matrix[i].begin(),matrix[i].end());
//         }
//         for(int i = 0; i < matrix.size(); i++){
//             for(int j = 0; j < matrix.size(); j++){
//                 cout<<matrix[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };