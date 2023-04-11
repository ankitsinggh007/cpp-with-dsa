// #include <iostream>
// using namespace std;
// class Node {
// public:
//   int data;
//   Node *next;
// };

// void insertAtHead(Node *&head, int n) {

//   Node *temp = new Node;
//   temp->data = n;
//   temp->next = head;
//   head = temp;
// }
// void insertAtTail(Node *&head, int n) {

//   Node *tail = head;
//   if (tail == NULL) {
//     Node *temp = new Node;
//     temp->data = n;
//     temp->next = head;
//     head = temp;
//     return;
//   }

//   while (tail->next != NULL) {
//     tail = tail->next;
//   }

//   Node *temp = new Node;
//   temp->data = n;
//   temp->next = NULL;
//   tail->next = temp;
// }
// void print(Node *head) {

//   while (head != NULL) {
//     cout << head->data << " ";
//     head = head->next;
//   }
// }

// int main() {

//   Node *head = NULL;
//   insertAtTail(head, 7);
//   insertAtTail(head, 5);
//   insertAtTail(head, 2);
//   insertAtTail(head, 0);
//   print(head);
// }