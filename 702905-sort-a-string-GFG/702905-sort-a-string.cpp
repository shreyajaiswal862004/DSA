class Solution {
  public:
    string sortString(string &s) {
        // code here
        vector<int>str;
        string ans="";
        for(int i=0;i<s.size();i++){
            str.push_back(s[i]-'a');
        }
        
        sort(str.begin(), str.end());
        
        for(int i=0;i<str.size();i++){
            ans+=(str[i]+'a');
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna