class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxlen=INT_MIN;
        int n=s.size();
        vector<int>freq(26,0);
        int i=0;
        for(int j=0;j<n;j++){
            freq[s[j]-'a']++;
            while(freq[s[j]-'a']>2){
                freq[s[i]-'a']--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return maxlen==INT_MIN?0:maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna