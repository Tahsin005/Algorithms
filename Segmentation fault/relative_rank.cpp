// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& score) {
//         priority_queue<int> pq;
//         for(int i = 0; i < score.size(); i++){
//             int x = score[i];
//             pq.push(x);
//         }
//         vector<string> v(score.size());
//         int size = pq.size();
//         if(size > 3){
//             int cnt = 1;
//             while(!pq.empty()){
//                 if(cnt == 1){
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     v[idx] = "Gold Medal";
//                     cnt++;
//                     pq.pop();
//                 }
//                 else if(cnt == 2){
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     v[idx] = "Silver Medal";
//                     cnt++;
//                     pq.pop();

//                 }
//                 else if(cnt == 3){
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     v[idx] = "Bronze Medal";
//                     cnt++;
//                     pq.pop();
//                 }
//                 else{
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     string s = to_string(cnt);
//                     v[idx] = s;
//                     pq.pop();
//                     cnt++;
//                 }
//             }
//         }
//         else if(size == 3){
//             int cnt = 1;
//             while(!pq.empty()){
//                 if(cnt == 1){
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     v[idx] = "Gold Medal";
//                     cnt++;
//                     pq.pop();
//                 }
//                 else if(cnt == 2){
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     v[idx] = "Silver Medal";
//                     cnt++;
//                     pq.pop();

//                 }
//                 else if(cnt == 3){
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     v[idx] = "Bronze Medal";
//                     cnt++;
//                     pq.pop();
//                 }
//             }
//         }
//         else if(size < 3){
//             int cnt = 1;
//             while(!pq.empty()){
//                 if(cnt == 1){
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     v[idx] = "Gold Medal";
//                     cnt++;
//                     pq.pop();
//                 }
//                 else if(cnt == 2){
//                     int idx = -1;
//                     int val = pq.top();
//                     for(int i = 0; i < score.size(); i++){
//                         if(val == score[i]){
//                             idx = i;
//                             break;
//                         }
//                     }
//                     v[idx] = "Silver Medal";
//                     cnt++;
//                     pq.pop();

//                 }
//             }

//         }
//         return v;
//     }
// };