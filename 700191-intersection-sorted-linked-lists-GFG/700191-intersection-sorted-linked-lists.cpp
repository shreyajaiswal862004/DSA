/* Structure of a Linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
        Node* temp1=head1;
        Node* temp2=head2;
        Node* dummy= new Node(-1);
        Node* dum=dummy;
        
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->data==temp2->data){
                dum->next=new Node(temp1->data);
                dum=dum->next;
                
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else if(temp1->data < temp2->data){
                temp1=temp1->next;
            }
            else temp2=temp2->next;
        }
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna