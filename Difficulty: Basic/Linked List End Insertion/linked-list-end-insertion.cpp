/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *temp=head;
        Node *newNode=new Node(x);
        if(head==NULL){
            head=newNode;
            return head;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        return head;
    }
};