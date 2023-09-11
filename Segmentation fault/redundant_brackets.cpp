// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {
//     stack<char> st;
//     for(int i = 0; i < s.size(); i++)
//     {
//         if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
//         {
//             st.push(s[i]);
//         }
//         else if(s[i] == ')')
//         {
//             bool flag = true;
//             while(st.top() != '(')
//             {
//                 char ch = st.top();
                
//                 if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
//                 {
//                     flag = false;
//                     st.pop();
//                 }
//             }
//             st.pop();
//             if(flag == true) return true;
            
//         }
//     }
//     return false;
// }