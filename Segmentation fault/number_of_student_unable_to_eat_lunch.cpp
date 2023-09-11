// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         queue<int> sand;
//         queue<int> stdnt;
//         for(int i = 0 ; i < students.size() ; i++){
//             stdnt.push(students[i]);
//             sand.push(sandwiches[i]);
//         }

//         int cnt = 0;
//         while(!stdnt.empty()){
//             if(stdnt.front() == sand.front()){
//                 stdnt.pop();
//                 sand.pop();
//                 cnt = 0;
//             }
//             else{
//                 stdnt.push(stdnt.front());
//                 stdnt.pop();
//                 cnt++;
//             }
//             if(cnt == stdnt.size()){
//                 break;
//             }
//         }
//         return stdnt.size();
//     }
// };