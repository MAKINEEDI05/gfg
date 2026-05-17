/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        int i=0;
        Node *temp=head;
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return head;
        }
        if(pos==1){
            newNode->next=head;
            return newNode;
        }
        for(i=1;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        return head;
    }
};