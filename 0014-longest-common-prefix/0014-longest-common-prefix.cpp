class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string temp=strs[0];
        int idx=0;

        for(int i=0;i<temp.size();i++){
            for(int j=1;j<strs.size();j++){
                if(i>strs[j].size())return ans;
                if(temp[i]!=strs[j][i]) return ans;
            }
            ans+=temp[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna