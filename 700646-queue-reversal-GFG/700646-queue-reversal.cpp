class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        vector<int>arr(q.size());
        int i=q.size()-1;
        while(!q.empty()){
            arr[i--]=q.front();
            q.pop();
        }
        
        for(int i=0;i<arr.size();i++){
            q.push(arr[i]);
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna