// class Solution {
// public:
//     string makeGood(string s) {
//         string ss = "";
//         stack<char> st;
//         st.push(s[0]);
//         for(int i = 1; i < s.size(); i++)
//         {
//             if(st.empty() == false && s[i] == st.top() + 32) 
//             {
//                 st.pop();
//             }
//             else if(st.empty() == false && s[i] == st.top() - 32)
//             {
//                 st.pop();
//             }
//             else
//             {
//                 st.push(s[i]);
//             }
//         }

//         while(!st.empty())
//         {
//             ss.push_back(st.top());
//             st.pop();
//         }
//         reverse(ss.begin(), ss.end());
//         return ss;
//     }
// };