// /**
//  * Definition of doubly linked list:
//  * class Node {
//  * public:
//  *      int data;
//  *      Node *prev;
//  *      Node *next;
//  *      Node() {
//  *          this->data = 0;
//  *          this->prev = NULL;
//  *          this->next = NULL;
//  *      }
//  *      Node(int data) {
//  *          this->data = data;
//  *          this->prev = NULL;
//  *          this->next = NULL;
//  *      }
//  *      Node (int data, Node *next, Node *prev) {
//  *          this->data = data;
//  *          this->prev = prev;
//  *          this->next = next;
//  *      }
//  * };
//  *
//  *************************************************************************/
// Node* modify(Node*& head)
// {
//     if(head == NULL) return NULL;
//     Node* tmp = head;
//     while(tmp->next != nullptr)
//     {
//         if(tmp->data == tmp->next->data && tmp->next->next != NULL)
//         {
//             Node* deleteNode = tmp->next;
//             tmp->next = tmp->next->next;
//             tmp->next->prev = tmp;
//             delete deleteNode;
//         }
//         else if(tmp->data == tmp->next->data && tmp->next->next == NULL)
//         {
//             Node* deleteNode = tmp->next;
//             tmp->next = NULL;
//             delete deleteNode;
//         }
//         else tmp = tmp->next;
//     }
//     return head;
// }
// Node * removeDuplicates(Node *head)
// {
//     Node* result = modify(head);
//     return result;
// }