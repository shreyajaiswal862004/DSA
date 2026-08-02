class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }

        for(auto it:mpp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna