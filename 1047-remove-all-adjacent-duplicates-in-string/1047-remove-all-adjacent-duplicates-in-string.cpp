class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";

        for(char ch:s){
            if(!ans.empty() && ans.back()==ch){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna