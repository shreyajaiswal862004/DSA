class Solution {
  public:
    bool isRepeat(string &s) {
        // code here
        int n=s.size();
        for(int len=1; len<=n/2;len++){
            if(n%len!=0) continue;
            string candidate = s.substr(0,len);
            string build="";
            for(int i=0;i<n/len;i++){
                build+=candidate;
            }
            if(build==s) return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna