class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
        int start=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            int l=i, r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>maxlen){
                    maxlen=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
            
             l=i;
             r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>maxlen){
                    maxlen=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
        }
        
        return s.substr(start,maxlen);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna