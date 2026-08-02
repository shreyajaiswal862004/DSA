class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>mpp1;
        unordered_map<char, char>mpp2;

        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if(mpp1.contains(s[i]) && mpp1[s[i]]!=t[i]){
                return false;
            }
            if(mpp2.contains(t[i]) && mpp2[t[i]]!=s[i]){
                return false;
            }
            mpp1[s[i]]=t[i];
            mpp2[t[i]]=s[i];
        }
        return true;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna