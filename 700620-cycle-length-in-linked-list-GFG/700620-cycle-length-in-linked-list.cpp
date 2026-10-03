/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        bool iscycle=true;
        int cnt=0;
        if(head==NULL) return 0;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                iscycle=true;
                break;
            }
        }
        
        if(fast==NULL || fast->next==NULL) iscycle=false;
        
        if(!iscycle) return 0;
        fast=fast->next;
        cnt++;
        while(slow!=fast){
            cnt++;
            fast=fast->next;
        }
        return cnt;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna