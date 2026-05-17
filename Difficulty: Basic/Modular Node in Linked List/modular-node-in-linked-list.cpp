/*Struture of the node of the linked list is as:

struct Node {
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
    int modularNode(Node *head, int k) {
        int a=-1,i=1;
        Node *temp=head;
        while(temp!=NULL){
            if(i%k==0){
                a=temp->data;
            }
            i++;
            temp=temp->next;
        }
        return a;
    }
};