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
  
    Node* reverse(Node* head){
        Node* back=NULL;
        Node* temp=head;
        while(temp!=NULL){
            Node* front=temp->next;
            temp->next=back;
            back=temp;
            temp=front;
        }
        return back;
    }
 
    Node* addOne(Node* head) {
        // code here
        
        if(head==NULL) return NULL;
        Node* temp= reverse(head);
        int carry=1;
        Node* dummy=new Node(-1);
        Node* curr=temp;
        dummy->next=curr;
        
        while(curr!=NULL || carry){
            int sum=carry;
            if(curr!=NULL){
                sum+=curr->data;
            }
            
            curr->data= (sum%10);
            carry=sum/10;
            if(curr->next == NULL && carry){
                curr->next=new Node(carry);
                carry=0;
            }
            curr=curr->next;
        }
        
        return reverse(temp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna