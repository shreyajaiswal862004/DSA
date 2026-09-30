/* Structure of Doubly Linked List Node
class Node {
	public:
	int data;
	Node *next;
	Node *prev;
	
	Node(int val) {
		data = val;
		this->next = this->prev = nullptr;
	}
};*/

class Solution {
  public:
    Node* delPos(Node* head, int k) {
        // code here
        
        if(k==1){
            Node* temp=head;
            head=head->next;
            if(head!=nullptr) head->prev=nullptr;
            
            delete temp;
            return head;
        }
        
        Node* temp=head;
        k--;
        
        
        while(k){
            temp=temp->next;
            k--;
        }
        
        temp->prev->next=temp->next;
        if(temp->next!=nullptr){
            temp->next->prev=temp->prev;
        }
        
        delete temp;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna