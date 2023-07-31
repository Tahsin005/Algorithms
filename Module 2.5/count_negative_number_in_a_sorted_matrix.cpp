// class Solution {
// public:
//     int countNegatives(vector<vector<int>>& grid) {
//         int cnt = 0, sum = 0;
//         for(int i = 0; i < grid.size(); i++){
//             int l = 0;
//             int r = grid[i].size() - 1;
//             while(l <= r){
//                 int mid = (l + r) / 2;
//                 if(grid[i][mid] < 0){
//                     cnt = grid[i].size() - mid;
//                     r = mid - 1;
//                 }
//                 else{
//                     l = mid + 1;
//                 }
//             }
//             sum += cnt;
//         }
//         return sum;
//     }
// };