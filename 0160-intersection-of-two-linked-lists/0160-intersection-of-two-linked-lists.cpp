/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1=0,cnt2=0;
        ListNode* tempA=headA;
        ListNode* tempB=headB;

        while(tempA!=NULL){
            cnt1++;
            tempA=tempA->next;
        }

        while(tempB!=NULL){
            cnt2++;
            tempB=tempB->next;
        }

        tempA=headA, tempB=headB;
        int gap=abs(cnt1-cnt2);
        if(cnt1>cnt2){
            while(gap){
                gap--;
                tempA=tempA->next;

            }
        }

        else if(cnt1<cnt2){
            while(gap){
                gap--;
                tempB=tempB->next;

            }
        }

        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;

            if(tempA==tempB) return tempA;
            if(tempA==NULL) tempA=headB;
            if(tempB==NULL) tempB=headA;
        }

        return tempA;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna