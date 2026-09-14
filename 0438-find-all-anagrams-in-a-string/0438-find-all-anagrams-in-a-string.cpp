class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int l=0, r=0, n=p.size(), m=s.size();
        unordered_map<int,int>mpp1;
        unordered_map<int,int>mpp2;
        vector<int>ans;
        for(auto it:p){
            mpp1[it]++;
        }
        while(r<m){
            mpp2[s[r]]++;
            if(l<r && r-l+1>n){
                mpp2[s[l]]--;
                if(mpp2[s[l]]==0) mpp2.erase(s[l]);
                l++;
            }
            if(r-l+1==n){
                if(mpp1==mpp2) ans.push_back(l);
            }
            r++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna