class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int>freq(128,0);
        for(auto x:stones){
            freq[x]++;
        }

        int cnt=0;
        for(auto x:jewels){
            if(freq[x]!=0){
                cnt+=freq[x];
            }
        }
        return cnt;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna