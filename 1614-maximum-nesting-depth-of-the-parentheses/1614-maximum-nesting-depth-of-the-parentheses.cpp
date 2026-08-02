class Solution {
public:
    int maxDepth(string s) {
        int cnt=0, maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else if (s[i]==')'){
                cnt--;
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna