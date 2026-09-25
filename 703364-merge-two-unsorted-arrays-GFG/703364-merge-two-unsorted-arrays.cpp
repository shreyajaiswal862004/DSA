class Solution {
  public:
    vector<int> sortedMerge(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>ans;
                for(auto it:a) ans.push_back(it);
                for(auto it:b) ans.push_back(it);
                sort(ans.begin(), ans.end());
                return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna