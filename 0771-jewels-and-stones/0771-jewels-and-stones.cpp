class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>mpp;
        for(auto x:jewels){
            mpp[x]++;
        }

        int cnt=0;
        for(auto x:stones){
            if(mpp.find(x)!=mpp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna