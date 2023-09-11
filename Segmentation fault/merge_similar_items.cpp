// class Solution
// {
// public:
//     vector<vector<int>> mergeSimilarItems(vector<vector<int>> &v1, vector<vector<int>> &v2)
//     {

//         vector<vector<int>> result, ans;
//         vector<int> v;
//         if (v1.size() < v2.size())
//         {
//             swap(v1, v2);
//         }
//         for (int i = 0; i < v1.size(); i++)
//         {
//             bool flag = false;
//             int x = v1[i][0];
//             int y;
//             for (int j = 0; j < v2.size(); j++)
//             {
//                 if (x == v2[j][0])
//                 {
//                     flag = true;
//                     y = v2[j][1];
//                     break;
//                 }
//             }
//             if (flag)
//             {
//                 v.push_back(x);
//                 int sum = v1[i][1] + y;
//                 v.push_back(sum);
//                 result.push_back(v);
//                 v.clear();
//             }
//             else
//             {
//                 v.push_back(x);
//                 v.push_back(v1[i][1]);
//                 result.push_back(v);
//                 v.clear();
//             }
//         }
//         v.clear();
//         for (int i = 0; i < v2.size(); i++)
//         {
//             int x = v2[i][0];
//             int y = v2[i][1];
//             bool flag = true;
//             for (int j = 0; j < result.size(); j++)
//             {
//                 if (x == result[j][0])
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
//             if (flag == true)
//             {
//                 v.push_back(x);
//                 v.push_back(y);
//                 ans.push_back(v);
//                 v.clear();
//             }
//         }
//         for (int i = 0; i < ans.size(); i++)
//         {
//             for (int j = 0; j < ans[i].size(); j++)
//             {
//                 cout << ans[i][j] << " ";
//             }
//             cout << endl;
//         }
//         while (!ans.empty())
//         {
//             result.push_back(ans.back());
//             ans.pop_back();
//         }
//         sort(result.begin(), result.end());
//         return result;
//     }
// };