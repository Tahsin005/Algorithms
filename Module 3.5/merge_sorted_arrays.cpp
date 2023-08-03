// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         // for (int j = 0, i = m; j < n; j++,i++){
//         //     nums1[i] = nums2[j];
//         //     // i++;
//         // }
//         // sort(nums1.begin(),nums1.end());
//         int i = 0;
//         int j = 0;
//         int k = 0;
//         vector<int> v;
//         for(int val: nums1){
//             v.push_back(val);
//         }
//         nums1.clear();
//         while(i < m && j < n){
//             if(v[i] <= nums2[j]){
//                 nums1.push_back(v[i]);
//                 i++;
//             }
//             else if(v[i] >= nums2[j]){
//                 nums1.push_back(nums2[j]);
//                 j++;
//             }
//         }
//         while(i < m){
//             nums1.push_back(v[i]);
//             i++;
//         }
//         while(j < n){
//             nums1.push_back(nums2[j]);
//             j++;
//         }
//         for(int val: nums1){
//             cout<<val<<" ";
//         }
//     }
// };