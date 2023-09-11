// class Solution {
// public:
//     int calPoints(vector<string>& op) {
//         stack<int> st;
//         for(int i = 0; i < op.size(); i++){
//             if(op[i] == "C"){
//                 st.pop();
//             }
//             else if (op[i] == "D"){
//                 int x = st.top() * 2;
//                 st.push(x);
//             } 
//             else if (op[i] == "+"){
//                 int x = st.top();
//                 st.pop();
//                 int y = st.top();
//                 int sum = x + y;
//                 st.push(x);
//                 st.push(sum);
//             }
//             else {
                
//                 int digit = stoi(op[i]);
//                 st.push(digit);
//             }
//         }

//         int result = 0;
//         while(!st.empty()){
//             result += st.top();
//             st.pop();
//         }

//         return result;
//     }
// };