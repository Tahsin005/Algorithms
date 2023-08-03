// class Solution {
// public: 
//     void merge(vector<int> &v,int l,int r,int mid){
//         int l_sz = mid - l + 1;
//         int left[l_sz + 1];

//         int r_sz = r - (mid + 1) + 1;
//         int right[r_sz + 1];

//         for(int i = l,j = 0; i <= mid; i++,j++){
//             left[j] = v[i];
//         }
//         for(int i = mid + 1,j = 0; i <= r; i++,j++){
//             right[j] = v[i];
//         }

//         left[l_sz] = INT_MAX;
//         right[r_sz] = INT_MAX;

//         int lp = 0;
//         int rp = 0;
//         for(int i = l; i <= r; i++){
//             if(left[lp] <= right[rp]){
//                 v[i] = left[lp];
//                 lp++;
//             }
//             else{
//                 v[i] = right[rp];
//                 rp++;
//             }
//         }
//     }
//     void mergesort(vector<int> &v,int l,int r){
//         if(l == r) return;
//         int mid = (l + r) / 2;
//         mergesort(v,l,mid);
//         mergesort(v,mid + 1,r);
//         merge(v,l,r,mid);
//     }
//     vector<int> sortArray(vector<int>& v) {
//         int n = v.size();
//         mergesort(v,0,n - 1);
//         return v;
//     }
// };