class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
    int l=0, r=s.size()-1;
            while(l<=r){
                if(s[l]!=s[r])return false;
                l++;
                r--;
            }
            return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna