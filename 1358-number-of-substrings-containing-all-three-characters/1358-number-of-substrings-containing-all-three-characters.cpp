class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0;
        int lastseen[3]={-1,-1,-1};
        for(int i=0;i<s.size();i++){
            lastseen[s[i]-'a']=i;
            if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1){
                cnt=cnt+(1+min({lastseen[0], lastseen[1], lastseen[2]}));
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna