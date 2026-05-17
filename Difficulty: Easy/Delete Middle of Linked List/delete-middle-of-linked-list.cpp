/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        Node *slow=head,*fast=head,*prev=NULL;
        if(head->next==NULL){
            head=NULL;
            return head;
        }
        while(fast->next!=NULL && fast->next->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next==NULL){
            prev->next=slow->next;
        }
        else{
            slow->next=slow->next->next;
        }
        return head;
    }
};