class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(auto it:s1){
            freq1[it-'a']++;
        }

        int l=0, r=0, n=s2.size(), m=s1.size();
        while(r<n){
            freq2[s2[r]-'a']++;
            if(r-l+1>m){
                freq2[s2[l]-'a']--;
                l++;
            }
            if(r-l+1==m){
                if(freq1==freq2) return true;
            }
            r++;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna