/* Structure for link list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int sumofNodes(Node* head, int n) {
        // Code Here
        Node* head1=head;
        int len=0;
        while(head1!=NULL){
            len++;
            head1=head1->next;
        }
        int cnt=len-n;
        
        head1=head;
        while(cnt){
            cnt--;
            head1=head1->next;
        }
        
        int sum=0;
        while(head1){
            sum+=head1->data;
            head1=head1->next;
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna