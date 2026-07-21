class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string ans="";
        for(int i=s.size()-1; i>=0 ;i--){
            ans+=s[i];
        }
        return ans;
    }
        
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna