class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        int ans=0;
        for(auto it:s){
            if(it=='(') cnt++;
            else{
                if(cnt>0) cnt--;
                else ans++;
            }
        }

        return ans+cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna