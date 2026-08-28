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
        head=reverse(head);
        
        Node* curr = head;
        int carry=1;
        while(curr!=NULL && carry!=0){
            int sum=curr->data+carry;
            curr->data=sum%10;
            carry=sum/10;
            
            if(carry && curr->next==NULL){
                curr->next=new Node(1);
                carry=0;
            }
            curr=curr->next;
        }
        
        head=reverse(head);
        return head;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna