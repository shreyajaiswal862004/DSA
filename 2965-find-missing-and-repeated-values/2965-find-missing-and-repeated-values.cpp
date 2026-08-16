class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>freq(n*n+1,0);

        for(auto it:grid){
            for(auto x:it){
                freq[x]++;
            }
        }

        int repeating=-1, missing=-1;
        for(int i=1;i<=n*n;i++){
            if(freq[i]==0){
                missing=i;
            }
            else if(freq[i]==2){
                repeating=i;
            }
        }
        vector<int>ans;
        ans={repeating,missing};
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna