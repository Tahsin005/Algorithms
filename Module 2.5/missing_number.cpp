// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int l = nums.size();
//         int sum = (l * (l + 1)) / 2;
//         int s = 0;
//         for(int i:nums){
//             s += i;
//         }
//         return sum - s;
//     }
// };