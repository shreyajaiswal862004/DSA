class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int i=0;
        int maxlen=0;

        for(int j=0;j<s.size();j++){
            if(mpp.find(s[j])!=mpp.end()){
                i=max(i,mpp[s[j]]+1);
            }
            maxlen=max(maxlen,j-i+1);
            mpp[s[j]]=j;
        }
        return maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna