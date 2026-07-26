class Solution {
public:
    string findValidPair(string s) {
        string ans="";
        unordered_map<char,int>mpp;
        for(char x:s){
            mpp[x]++;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1] && s[i-1]-'0'== mpp[s[i-1]] && s[i]-'0'==mpp[s[i]]){
                ans+=s[i-1];
                ans+=s[i];
                return ans;
            }
        }
        return "";
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna