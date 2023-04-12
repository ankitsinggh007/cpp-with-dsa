// // #include <iostream>
// // using namespace std;
// // class Node {
// // public:
// //   int data;
// //   Node *next;
// // };

// // void insertAtHead(Node *&head, int n) {

// //   Node *temp = new Node;
// //   temp->data = n;
// //   temp->next = head;
// //   head = temp;
// // }
// // void insertAtTail(Node *&head, int n) {

// //   Node *tail = head;
// //   if (tail == NULL) {
// //     Node *temp = new Node;
// //     temp->data = n;
// //     temp->next = head;
// //     head = temp;
// //     return;
// //   }

// //   while (tail->next != NULL) {
// //     tail = tail->next;
// //   }

// //   Node *temp = new Node;
// //   temp->data = n;
// //   temp->next = NULL;
// //   tail->next = temp;
// // }
// // void print(Node *head) {

// //   while (head != NULL) {
// //     cout << head->data << " ";
// //     head = head->next;
// //   }
// // }

// // int main() {

// //   Node *head = NULL;
// //   insertAtTail(head, 7);
// //   insertAtTail(head, 5);
// //   insertAtTail(head, 2);
// //   insertAtTail(head, 0);
// //   print(head);
// // }
// #include <bits/stdc++.h>
// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//                 int data;
//                 Node *next;
//                 Node(int data)
//                 {
//                         this->data = data;
//                         this->next = NULL;
//                 }
//         };

// *****************************************************************/

// Node *floydDetection(Node *head) {
//   if (head == NULL) {
//     return NULL;
//   }

//   Node *slow = head;
//   Node *fast = head;

//   while (slow != NULL and fast != NULL) {

//     fast = fast->next;

//     if (fast != NULL) {
//       fast = fast->next;
//     }

//     slow = slow->next;

//     if (slow == fast) {
//       return slow;
//     }
//   }
//   return NULL;
// }

// Node *getStartingNode(Node *head) {

//   if (head == NULL) {
//     return NULL;
//   }

//   Node *intersection = floydDetection(head);

//   if (intersection == NULL) {
//     return NULL;
//   }

//   Node *slow = head;

//   while (slow != intersection) {
//     slow = slow->next;
//     intersection = intersection->next;
//   }
//   return slow;
// }

// bool detectAndRemoveCycle(Node *head) {
//   // Write your code here
//   if (head == NULL) {
//     return NULL;
//   }
//   Node *startOfLoop = getStartingNode(head);
//   if (startOfLoop == NULL) {
//     return false;
//   }

//   Node *temp = startOfLoop;

//   while (temp->next != startOfLoop) {
//     temp = temp->next;
//   }
//   temp->next = NULL;
// }
bool detectCycle(Node *head) {

  Node *slow = head;
  Node *fast = head;

  while (slow != NULL && fast != NULL && fast->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;
    if (slow == fast) {
      return true;
    }
  }
  return false;
}