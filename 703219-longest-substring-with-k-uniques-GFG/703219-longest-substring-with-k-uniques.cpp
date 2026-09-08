class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<int,int>mpp;
        int r=0, l=0, n=s.size(), maxlen=-1;
    
        while(r<n){
            mpp[s[r]]++;
            while(mpp.size()>k && l<=r){
                mpp[s[l]]--;
                if(mpp[s[l]]==0)mpp.erase(s[l]);
                l++;
            }
            if(mpp.size()==k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna