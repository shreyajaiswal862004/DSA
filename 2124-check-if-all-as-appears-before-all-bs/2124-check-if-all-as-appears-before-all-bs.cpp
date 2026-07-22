class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i-1]=='b' && s[i]=='a') return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna