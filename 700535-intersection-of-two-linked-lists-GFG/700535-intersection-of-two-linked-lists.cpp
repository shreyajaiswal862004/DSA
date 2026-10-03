/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
        unordered_map<int,int>mpp;
                Node* dummy=new Node(-1);
                Node* dum=dummy;

                Node* temp1=head1;
                while(temp1!=NULL){
                    mpp[temp1->data]++;
                    temp1=temp1->next;
                }

                Node* temp2=head2;
                while(temp2!=NULL){
                    if(mpp.find(temp2->data)!=mpp.end()){
                        mpp[temp2->data]--;
                    }
                    temp2=temp2->next;
                }

                // for(auto it:mpp){
                //     if(it.second==0){
                //         dum->next=new Node(it.first);
                //         dum=dum->next;
                //     }
                // }

                temp1=head1;
                while(temp1!=NULL){
                    if(mpp[temp1->data]==0){
                        dum->next=new Node(temp1->data);
                        dum=dum->next;
                    }
                    temp1=temp1->next;
                }
                return dummy->next;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna