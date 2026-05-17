/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        int a=0,check=0;
        Node *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                check=1;
                slow=head;
                break;
            }
        }
        if(check==0){
            return -1;
        }
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        a=slow->data;
        return a;
    }
};