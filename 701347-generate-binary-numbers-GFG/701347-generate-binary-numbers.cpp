class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        vector<string>ans;
        queue<string>q;
        q.push("1");
        for(int i=0;i<n;i++){
            string curr=q.front();
            q.pop();
            ans.push_back(curr);
            q.push(curr+"0");
            q.push(curr+"1");
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna