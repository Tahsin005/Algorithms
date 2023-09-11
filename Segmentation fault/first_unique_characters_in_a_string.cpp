// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int arr[26] = {0};
//         queue<char> q;
//         for(int i = 0; i < s.size(); i++)
//         {
//             char ch = s[i];
//             arr[ch -'a']++;
//             q.push(ch);
//         }
        
//         int idx = 0;
//         while(!q.empty()){
//             char ch = q.front();
            
//             if(arr[ch - 'a'] == 1){
//                 return idx;
//             }
//             q.pop();
//             idx++;
//         }
        
//         return -1;
//     }
// };