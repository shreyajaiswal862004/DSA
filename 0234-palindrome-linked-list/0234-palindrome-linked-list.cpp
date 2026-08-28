/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode*fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }

        ListNode* back=NULL;
        ListNode*curr=slow->next;
        while(curr!=NULL){
            ListNode*front=curr->next;
            curr->next=back;
            back=curr;
            curr=front;
        }

        ListNode* temp=head;
        while(back!=NULL){
            if(temp->val != back->val){
                return false;
            }
            temp=temp->next;
            back=back->next;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna