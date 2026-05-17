/* Structure of linked list Node
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
    Node* removeDuplicates(Node* head) {
        int a=head->data;
        Node *temp=head,*prev=NULL;
        while(temp!=NULL){
            prev=temp;
            temp=temp->next;
            if(temp==NULL){
                break;
            }
            if(temp->data==prev->data){
                if(prev->next->next!=NULL){
                    prev->next=temp->next;
                    temp=prev;
                }
                else{
                    prev->next=NULL;
                    temp=NULL;
                }
            }
        }
        return head;
    }
};