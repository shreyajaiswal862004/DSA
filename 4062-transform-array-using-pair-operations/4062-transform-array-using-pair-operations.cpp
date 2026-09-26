class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sum1=0;
        long long sum2=0;

        for(auto it:source){
            sum1+=it;
        }

        for(auto it:target){
            sum2+=it;
        }

        return sum1==sum2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna