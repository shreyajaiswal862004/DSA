class Solution {
  public:
    int maxWeightCell(vector<int> &exits) {
        // code here
        int n=exits.size();
        vector<int>weights(n,0);
        
        for(int i=0;i<n;i++){
            if(exits[i]!=-1){
                weights[exits[i]]+=i;
            }
        }
        
        int bestweight=weights[0];
        int bestidx=0;
        
        for(int i=0;i<n;i++){
            if(weights[i]>=bestweight){
                bestweight=weights[i];
                bestidx=i;
            }
        }
        return bestidx;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna