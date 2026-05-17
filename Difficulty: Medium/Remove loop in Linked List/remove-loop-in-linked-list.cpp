/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        int a=0;
        Node *slow=head,*fast=head,*prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            prev=fast->next;
            fast=fast->next->next;
            if(slow==fast){
                a=1;
                slow=head;
                break;
            }
        }
        if(a==0){
            return;
        }
        if(slow==fast){
            prev->next=NULL;
            return;
        }
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
    }
};