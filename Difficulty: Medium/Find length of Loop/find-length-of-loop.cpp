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
    int lengthOfLoop(Node *head) {
        int a=0;
        Node *slow=head,*fast=head,*prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            prev=fast->next;
            fast=fast->next->next;
            if(slow==fast){
                a=1;
                break;
            }
        }
        if(a==0){
            return 0;
        }
        fast=fast->next;
        while(slow!=fast){
            a++;
            fast=fast->next;
        }
        return a;
    }
};