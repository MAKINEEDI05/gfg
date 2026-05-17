/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = nullptr;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        Node *slow=head;
        Node *fast=head;
        Node *newNode=new Node(x);
        if(head==NULL){
            head=newNode;
            return head;
        }
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        newNode->next=slow->next;
        slow->next=newNode;
        return head;
    }
};