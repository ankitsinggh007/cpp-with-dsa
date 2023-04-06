#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;
};

void insertAtHead(Node *&head, int n) {

  Node *temp = new Node;
  temp->data = n;
  temp->next = head;
  head = temp;
}
void print(Node *head) {

  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}

int main() {

  Node *head = NULL;
  insertAtHead(head, 7);
  insertAtHead(head, 5);
  insertAtHead(head, 2);
  insertAtHead(head, 0);
  print(head);
}