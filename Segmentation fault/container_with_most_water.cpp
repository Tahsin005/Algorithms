// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int mx = INT_MIN;
//         int l = 0;
//         int r = height.size() - 1;
//         while(l < r){
//             int area = min(height[l],height[r]) * (r - l);
//             mx = max(area,mx);

//             if(height[l] < height[r]){
//                 l++;
//             }
//             else{
//                 r--;
//             }
//         }
//         return mx;
//     }
// };