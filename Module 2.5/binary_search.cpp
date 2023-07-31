// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int l = 0,r = nums.size() - 1;
//         int flag= -1;
//         while(l <= r){
//             int mid = (l + r) / 2;
//             if(nums[mid] == target){
//                 flag = mid;
//                 break;
//             }   
//             if(target > nums[mid]){
//                 l = mid + 1;
//             }
//             else{
//                 r = mid - 1;
//             }
//         }
//         return flag;
//     }
// };