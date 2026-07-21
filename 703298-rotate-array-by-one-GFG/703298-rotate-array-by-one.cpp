class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
       reverse(arr.begin(),arr.end());
       reverse(arr.begin()+1,arr.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna