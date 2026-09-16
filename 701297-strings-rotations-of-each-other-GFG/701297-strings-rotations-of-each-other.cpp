class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        string s=s1+s1;
        if(s.find(s2)!=string::npos)return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna