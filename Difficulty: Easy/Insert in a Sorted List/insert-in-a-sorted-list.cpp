/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        int a=head->data;
        Node *temp=head,*prev=NULL;
        Node *newNode=new Node(key);
        while(temp!=NULL){
            if(temp->data>key){
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        if(prev==NULL){
            newNode->next=temp;
            head=newNode;
            return head;
        }
        prev->next=newNode;
        newNode->next=temp;
        return head;
    }
};