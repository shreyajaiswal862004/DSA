/* Structure of Linked List Node
class Node
{
    int data;
    Node *next;

    Node(int x){
        int data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    void deleteAlt(Node *head) {
        // code here
        Node* temp=head;
        
        while(temp!=NULL && temp->next!=NULL){
            Node* del=temp->next;
            
            temp->next=del->next;
            del->next=NULL;
            delete del;
            
            temp=temp->next;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna