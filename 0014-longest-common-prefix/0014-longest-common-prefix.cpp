class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sample=strs[0];
        bool match=true;
        string ans="";
        for(int i=0;i<sample.size();i++){
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size() || strs[0][i]!=strs[j][i]){
                    match=false;
                    break;
                }
            }
            if(!match){
                break;
            }
            else{
                ans+=strs[0][i];
            } 
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna