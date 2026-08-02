class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mpp1;
        unordered_map<char,char>mpp2;

        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            char sc=s[i], tc=t[i];
            if(mpp1.count(sc) && mpp1[sc]!=tc)return false;
            if(mpp2.count(tc) && mpp2[tc]!=sc)return false;

            mpp1[sc]=tc;
            mpp2[tc]=sc;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna