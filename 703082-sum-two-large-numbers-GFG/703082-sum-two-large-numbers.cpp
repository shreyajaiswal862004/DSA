class Solution {
  public:
    string findSum(string &s1, string &s2) {
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;
        string ans = "";
        
        while (i >= 0 || j >= 0 || carry) {
            int d1 = (i >= 0) ? s1[i] - '0' : 0;
            int d2 = (j >= 0) ? s2[j] - '0' : 0;
            
            int sum = d1 + d2 + carry;
            carry = sum / 10;
            ans.push_back((sum % 10) + '0');
            
            i--; j--;
        }
        
        reverse(ans.begin(), ans.end());
        
        // Strip leading zeros
        int start = 0;
        while (start < (int)ans.size() - 1 && ans[start] == '0') {
            start++;
        }
        return ans.substr(start);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna