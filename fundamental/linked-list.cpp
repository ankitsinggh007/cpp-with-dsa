// // // #include <iostream>
// // // using namespace std;
// // // class Node {
// // // public:
// // //   int data;
// // //   Node *next;
// // // };

// // // void insertAtHead(Node *&head, int n) {

// // //   Node *temp = new Node;
// // //   temp->data = n;
// // //   temp->next = head;
// // //   head = temp;
// // // }
// // // void insertAtTail(Node *&head, int n) {

// // //   Node *tail = head;
// // //   if (tail == NULL) {
// // //     Node *temp = new Node;
// // //     temp->data = n;
// // //     temp->next = head;
// // //     head = temp;
// // //     return;
// // //   }

// // //   while (tail->next != NULL) {
// // //     tail = tail->next;
// // //   }

// // //   Node *temp = new Node;
// // //   temp->data = n;
// // //   temp->next = NULL;
// // //   tail->next = temp;
// // // }
// // // void print(Node *head) {

// // //   while (head != NULL) {
// // //     cout << head->data << " ";
// // //     head = head->next;
// // //   }
// // // }

// // // int main() {

// // //   Node *head = NULL;
// // //   insertAtTail(head, 7);
// // //   insertAtTail(head, 5);
// // //   insertAtTail(head, 2);
// // //   insertAtTail(head, 0);
// // //   print(head);
// // // }
// // #include <bits/stdc++.h>
// // /****************************************************************

// //     Following is the class structure of the Node class:

// //         class Node
// //         {
// //         public:
// //                 int data;
// //                 Node *next;
// //                 Node(int data)
// //                 {
// //                         this->data = data;
// //                         this->next = NULL;
// //                 }
// //         };

// // *****************************************************************/

// // Node *floydDetection(Node *head) {
// //   if (head == NULL) {
// //     return NULL;
// //   }

// //   Node *slow = head;
// //   Node *fast = head;

// //   while (slow != NULL and fast != NULL) {

// //     fast = fast->next;

// //     if (fast != NULL) {
// //       fast = fast->next;
// //     }

// //     slow = slow->next;

// //     if (slow == fast) {
// //       return slow;
// //     }
// //   }
// //   return NULL;
// // }

// // Node *getStartingNode(Node *head) {

// //   if (head == NULL) {
// //     return NULL;
// //   }

// //   Node *intersection = floydDetection(head);

// //   if (intersection == NULL) {
// //     return NULL;
// //   }

// //   Node *slow = head;

// //   while (slow != intersection) {
// //     slow = slow->next;
// //     intersection = intersection->next;
// //   }
// //   return slow;
// // }

// // bool detectAndRemoveCycle(Node *head) {
// //   // Write your code here
// //   if (head == NULL) {
// //     return NULL;
// //   }
// //   Node *startOfLoop = getStartingNode(head);
// //   if (startOfLoop == NULL) {
// //     return false;
// //   }

// //   Node *temp = startOfLoop;

// //   while (temp->next != startOfLoop) {
// //     temp = temp->next;
// //   }
// //   temp->next = NULL;
// // }
// bool detectCycle(Node *head) {

//   Node *slow = head;
//   Node *fast = head;

//   while (slow != NULL && fast != NULL && fast->next != NULL) {
//     fast = fast->next->next;
//     slow = slow->next;
//     if (slow == fast) {
//       return true;
//     }
//   }
//   return false;
// }
// /************************************************************

//     Following is the linked list node structure.

//     class Node
//     {
//         public:
//         int data;
//         Node* next;

//         Node(int data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// ************************************************************/

// Node * uniqueSortedList(Node * head) {
//    if(head==NULL) return head;
//     Node*temp=head->next;
//     Node*curr=head;
//     while(temp!=NULL){
//         if(curr->data==temp->data){
//             temp=temp->next;
//             curr->next=temp;
//             continue;
//         }
//         curr=curr->next;
//         temp=temp->next;
//     }
//     return head;
// }
# include<iostream>
using namespace std;

class Node{
public:
int data;
Node*next;

Node(int data){
  this->data=data;
  this->next=NULL;
}

};
// Print LL
void Print(Node*head){
 Node*temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
// reversed in LL

void reverseLinkedList(Node*&temp){
	Node*prev=NULL;
	Node*Curr=temp;
	Node*Next=NULL;
	while(Curr!=NULL){
		Next=Curr->next;
		Curr->next=prev;
		prev=Curr;
		Curr=Next;
	}
  temp=prev;
  cout<<endl;
}
// Insert at tail in LL

void insertAtHead(Node*&head,int k){

  if(head==NULL){
    return;
  }
  Node*temp=new Node(k);
  Node*tail=head;
  while(tail->next!=NULL){
    tail=tail->next;
  }
  tail->next=temp;
  
}
// size of LL
int length(Node*head){
  int count=0;
  while(head!=NULL){
  count++;
    head=head->next;
  }
  return count;
}

int main(){
  Node*head=new Node(0);
  insertAtHead(head,8);
  insertAtHead(head,5);
  insertAtHead(head,3);
  insertAtHead(head,37);
  
  insertAtHead(head,10);
  insertAtHead(head,11);
  insertAtHead(head,12);
  
  insertAtHead(head,13);
  insertAtHead(head,14);
  Print(head);
  Node*temp=head;
  
  reverseLinkedList(temp);
  cout<<endl;
  Print(temp);
  
}




