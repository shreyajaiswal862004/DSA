class Solution {
  public:
    void insertAtBottom(stack<int> &s, int k){
        if(s.empty()){
            s.push(k);
            return;
        }
        int temp=s.top();
        s.pop();
        insertAtBottom(s,k);
        s.push(temp);
    }
    void reverseStack(stack<int> &s) {
        // code here
        if(s.empty()){
            return;
        }
        int top=s.top();
        s.pop();
        reverseStack(s);
        
        insertAtBottom(s,top);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna