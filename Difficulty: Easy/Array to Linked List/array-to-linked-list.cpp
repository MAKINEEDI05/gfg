/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        int a=0,i=0,n=arr.size();
        Node *head=new Node(arr[n-1]);
        for(i=n-2;i>=0;i--){
            Node *newNode=new Node(arr[i]);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
};