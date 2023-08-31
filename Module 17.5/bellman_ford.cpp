// vector<int> bellmonFord(int k, int l, int s, vector<vector<int>> &vec) {
//   // Write your code here.
//     vector<int> d(k + 1,1e8);
    
//     d[s] = 0;

//     for(int i = 1; i < k; i++){
//         for(int j = 0; j < l; j++){
//             int u = vec[j][0];
//             int v = vec[j][1];
//             int w = vec[j][2];

//             if(d[u] != 1e9 && d[v] > (d[u] + w)){
//                 d[v] = d[u] + w;
//             }
//         }
//     }
    
//     return d;
// }