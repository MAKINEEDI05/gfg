/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        int i=0;
        Node* temp=new Node(0);
        temp->next=head;
        Node* curr=temp;
        for(i=0;i<k && temp!=NULL;i++){
            temp=temp->next;
        }
        if(i<k-1 || temp==NULL) return -1;
        while(temp!=NULL){
            temp=temp->next;
            curr=curr->next;
        }
        return curr->data;
    }
};