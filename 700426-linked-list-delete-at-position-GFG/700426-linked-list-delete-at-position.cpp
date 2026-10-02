/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        int cnt=0;
        Node* temp=head;
        if(x==1){
            head=head->next;
            delete temp;
            return head;
        }
        
        while(temp!=NULL){
            cnt++;
            if(cnt==x-1) temp->next=temp->next->next;
            temp=temp->next;
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna