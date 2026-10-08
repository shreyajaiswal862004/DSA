class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int ans=-1;
        vector<vector<int>>adj1(n);
        vector<vector<int>>adj2(n);
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && mat[i][j]==1){
                    adj1[i].push_back(j);
                    adj2[j].push_back(i);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(adj1[i].size()==0 && adj2[i].size()==n-1) return i;
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna