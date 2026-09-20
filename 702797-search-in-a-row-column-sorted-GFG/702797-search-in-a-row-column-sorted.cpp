class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat[0].size();
        int row=0, col=n-1;
        
        while(row<mat.size() && col>=0){
            if(mat[row][col]==x) return true;
            
            else if(mat[row][col]<x) row++;
            else col--;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna