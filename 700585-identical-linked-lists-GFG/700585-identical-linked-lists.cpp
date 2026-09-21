/* Strucutre of a Node in linked list
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
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node* temp1=head1;
        Node* temp2=head2;
        
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->data!=temp2->data) return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        if((temp1==NULL && temp2!=NULL) || (temp1==NULL && temp2!=NULL)) return false;
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna