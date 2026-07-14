class Solution {
  public:
    bool metaStrings(string &s1, string &s2) {
        // code here
        if (s1==s2) return false;
        if(s1.size()!=s2.size()) return false;
        
        int first=-1, second=-1;
        int count=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(count==0) first=i;
                else if(count==1) second=i;
                else return false;
                count++;
            } 
        }
        
        return count==2 && s1[first]==s2[second] && s1[second]==s2[first];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna