/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
  public:
    Node* cloneLinkedList(Node* head) {
        map<Node*,Node*> A;
        Node *temp=head,*temp1=head;
        Node *newNode=NULL;
        Node *ref=newNode;
        while(temp!=NULL){
            Node *node=new Node(temp->data);
            if(ref==NULL){
                ref=node;
                newNode=ref;
            }
            else{
                ref->next=node;
                ref=ref->next;
            }
            A[temp]=ref;
            temp=temp->next;
        }
        Node *curr=newNode;
        while(temp1!=NULL){
            if(temp1->random!=NULL){
                curr->random=A[temp1->random];
            }
            temp1=temp1->next;
            curr=curr->next;
        }
        return newNode;
    }
};