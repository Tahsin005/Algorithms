// #include<bits/stdc++.h>
// class KthLargest {
// public:
//     priority_queue<int,vector<int>,greater<int>> pq1,pq2;
//     int sz;
//     KthLargest(int k, vector<int>& nums) {
//         sz = k;
//         for(int i = 0; i < nums.size(); i++){
//             pq1.push(nums[i]);
//         }
//     }

//     int add(int val) {
//         pq1.push(val);
//         while(pq1.size() > sz){
//             pq1.pop();
//         }
//         return pq1.top();
//     }
// };