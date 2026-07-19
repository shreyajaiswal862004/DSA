class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, maxlen=0, n=s.size();
        unordered_map<char,int>mpp;
        for(int j=0;j<n;j++){
            if(mpp.find(s[j])!=mpp.end()){
                i=max(i,mpp[s[j]]+1);
            }
            maxlen=max(maxlen, j-i+1);
            mpp[s[j]]=j;
        }
        return maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna