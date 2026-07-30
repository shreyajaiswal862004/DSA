class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        int n =grid[0].size()*grid.size();
        vector<int>freq(n+1,0);

        for(int i=0;i<grid.size();i++){
            for(auto x:grid[i]){
                freq[x]++;
            }
        }

        int repeating, missing;

        for(int i=1;i<=n;i++){
            if(freq[i]==2){
                repeating=i;
            }
            else if(freq[i]==0){
                missing=i;
            }
        }
        
        ans.insert(ans.end(), {repeating, missing});
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna