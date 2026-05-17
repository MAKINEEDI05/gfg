/*
class Node
{
  public:
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

class Solution {
  public:
    bool isSorted(Node* head) {
        int a=head->data;
        Node *temp=head;
        Node *temp1=head;
        if(head->next==NULL){
            return 1;
        }
        int check=1,check1=1;
        while(temp!=NULL){
            if(temp->data<a){
                check=0;
            }
            if(temp->data>a){
                check1=0;
            }
            a=temp->data;
            temp=temp->next;
            
        }
        if(check || check1){
            return 1;
        }
        return 0;
    }
};