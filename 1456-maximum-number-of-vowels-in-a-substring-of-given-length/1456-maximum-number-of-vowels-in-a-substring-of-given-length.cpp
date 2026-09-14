class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt=0, maxcount=0;
        unordered_map<int,int>mpp;
        int l=0,r=0,n=s.size();

        while(r<n){
            mpp[s[r]]++;
            if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u') cnt++;

            if(r-l+1>k){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u' ) cnt--;
                l++;
            }

            if(r-l+1==k){
                maxcount=max(maxcount,cnt);
            }
            r++;
        }
        return maxcount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna