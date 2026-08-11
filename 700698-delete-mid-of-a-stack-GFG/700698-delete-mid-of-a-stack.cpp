class Solution {
    void deleteM(stack<int>& s, int size, int count){
        if(count==size/2){
            s.pop();
            return;
        }
        
        int top=s.top();
        s.pop();
        deleteM(s,size,count+1);
        s.push(top);
    }
  public:
    void deleteMid(stack<int>& s) {
        // code here
        int size=s.size();
       deleteM(s,size,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna