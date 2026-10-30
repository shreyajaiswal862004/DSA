class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int>mpp;
        int ans=-1;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }

        for(int i=0;i<s.size();i++){
            if(mpp[s[i]]==1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna