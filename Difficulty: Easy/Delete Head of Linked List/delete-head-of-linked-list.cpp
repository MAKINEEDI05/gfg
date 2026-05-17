/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node *deleteHead(Node *head) {
        if(head->next==NULL){
            head=NULL;
            return head;
        }
        head=head->next;
        return head;
    }
};
