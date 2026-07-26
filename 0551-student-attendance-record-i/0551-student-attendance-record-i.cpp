class Solution {
public:
    bool checkRecord(string s) {
        int cnt1=1;
        int cnt0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                cnt0++;
                if(cnt0>1) return false;
            }
        }

        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1] && s[i]=='L'){
                cnt1++;
                if(cnt1>2) return false;
            }
            
            else cnt1=1;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna