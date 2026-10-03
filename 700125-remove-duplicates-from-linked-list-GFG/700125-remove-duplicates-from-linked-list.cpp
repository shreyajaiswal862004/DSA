/* Structure of linked list Node
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
    Node* removeDuplicates(Node* head) {
        // code here
        unordered_map<int,int>mpp;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL){
            if(mpp.find(temp->data)!=mpp.end()){
                prev->next=temp->next;
            }
            else{
                mpp[temp->data]++;
                prev=temp;
            }
            temp=temp->next;
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna