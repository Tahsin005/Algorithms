// class Solution {
// public:
//     int timeRequiredToBuy(vector<int>& t, int k) {
//         queue<pair<int, int>> q;
//         for(int i = 0;  i < t.size(); i++)
//         {
//             pair<int, int> pr = {i, t[i]};
//             q.push(pr);
//         }

//         int cnt = 0;
//         int sz = q.size();
//         while(true)
//         {
//             pair<int, int> pr = q.front();
//             pr.second = pr.second - 1;
//             cnt++;
//             if(k == pr.first && pr.second == 0)
//             {
//                 break;
//             }
//             else if(k != pr.first && pr.second == 0)
//             {
//                 q.pop();
//             }
//             else
//             {
//                 q.pop();
//                 q.push(pr);
//             }
//         }
//         return cnt;
//     }
// };