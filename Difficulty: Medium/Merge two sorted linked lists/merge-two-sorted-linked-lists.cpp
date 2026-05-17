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
    Node* sortedMerge(Node* head1, Node* head2) {
        if(head1==NULL || head2==NULL){
            if(head1==NULL){
                return head2;
            }
            return head1;
        }
        Node* temp1=head1,*temp2=head2;
        if(temp1->data<=temp2->data){
            temp1->next=sortedMerge(temp1->next,temp2);
            return temp1;
        }
        temp2->next=sortedMerge(temp1,temp2->next);
        return temp2;
    }
};