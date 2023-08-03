// #include <bits/stdc++.h> 
// int findSecondLargest(int n, vector<int> &arr)
// {
//     // Write your code here.
//     int mx = INT_MIN;
//     int smax = INT_MIN;

//     for(int i = 0; i < n; i++){
//         if(mx < arr[i]){
//             mx = arr[i];
//         }
//     }
//     for(int i = 0; i < n; i++){
//         if(smax < arr[i]  && arr[i] != mx){
//             smax = arr[i];
//         }
//     }
//     if(smax == INT_MIN) return -1;
//     else return smax;
// }