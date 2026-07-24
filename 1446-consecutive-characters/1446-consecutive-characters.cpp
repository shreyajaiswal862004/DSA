class Solution {
public:
    int maxPower(string s) {
        int cnt=1, maxcount=1;
        char ch=s[0];
        for(int i=1;i<s.size();i++){
            if(ch==s[i]){
                cnt++;
                maxcount=max(maxcount,cnt);
            }
            else{
                ch=s[i];
                cnt=1;
            }
        }
        return maxcount;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna