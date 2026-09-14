class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0, r=0, n=s.size();
        unordered_map<int,int>mpp;
        int cnt=0;
        while(r<n){
            mpp[s[r]]++;
            if(r-l+1>3){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            if(mpp.size()==3) cnt++;
            r++;
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna