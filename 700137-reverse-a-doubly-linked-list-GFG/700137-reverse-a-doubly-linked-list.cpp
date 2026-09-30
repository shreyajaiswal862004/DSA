/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* back=nullptr;
        Node* temp=head;
        Node* front=nullptr;
        
        if(temp->next!=NULL){
            front=head->next;
        }
        else{
            return head;
        }
        
        
        while(front!=NULL){
            temp->next=back;
            
            if(back!=NULL){
                back->prev=temp;
            }
            
            back=temp;
            temp=front;
            front=front->next;
        }
        
        temp->next=back;
        back->prev=temp;
        temp->prev=NULL;
        return temp;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna