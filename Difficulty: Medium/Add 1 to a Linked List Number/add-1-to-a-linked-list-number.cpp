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
    pair<Node*,int> fun(Node* head,int carry){
        if(head->next==NULL){
            int val=head->data+1;
            pair<Node*,int> A;
            head->data=val%10;
            A.first=head;
            A.second=val/10;
            return A;
        }
        pair<Node*,int> A=fun(head->next,1);
        int val=head->data+A.second;
        head->data=val%10;
        return {head,val/10};
    }
    Node* addOne(Node* head) {
        pair<Node*,int> A=fun(head,1);
        if(A.second>0){
            Node *newNode=new Node(A.second);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
};