// /************************************************************

//     Following is the linkedList class structure:

//     class Node {
//     public:
//         int data;
//         Node *next;

//         Node(int data) {
//             this->data = data;
//             next = NULL;
//         }
//         ~Node() {
//             if (next != NULL) {
//                 delete next;
//             }
//         }
// };

// ************************************************************/

// int binaryToInteger(int n, Node *head) {
//     vector<int> v;
//     Node* tmp = head;
//     while(tmp != NULL)
//     {
//         v.push_back(tmp->data);
//         tmp = tmp -> next;
//     }
//     int sum = 0;
//     int baseMul = 1;
//     while(!v.empty())
//     {
//         int lastDigit = v.back();
//         sum = sum + (lastDigit*baseMul);
//         baseMul *= 2;
//         v.pop_back();
//     }

//     return sum;
// }