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
    Node* deleteNode(Node* head, int x) {
        if(x==1){
            head=head->next;
            return head;
        }
        Node *temp=head;
        int i=1;
        for(i=1;i<x-1;i++){
            temp=temp->next;
        }
        if(temp->next->next==NULL){
            temp->next=NULL;
        }
        else{
            temp->next=temp->next->next;
        }
        return head;
    }
};