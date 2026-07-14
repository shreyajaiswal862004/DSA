class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_map<char,int>mpp;
        string ans;
        
        for(auto ch:s){
            mpp[ch]++;
        }
        
        for(auto ch:s){
            if(mpp[ch]!=-1){
                ans+=ch;
                mpp[ch]=-1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna