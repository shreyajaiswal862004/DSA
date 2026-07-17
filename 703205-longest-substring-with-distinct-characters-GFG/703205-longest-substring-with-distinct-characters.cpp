class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int i=0,j=0,n=s.size();
        int maxlen=0;
        unordered_map<char,int>mpp;
        
        while(j<n){
            if(mpp.find(s[j])!=mpp.end() && mpp[s[j]]>=i){
                i=mpp[s[j]]+1;
            }
            mpp[s[j]]=j;
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna