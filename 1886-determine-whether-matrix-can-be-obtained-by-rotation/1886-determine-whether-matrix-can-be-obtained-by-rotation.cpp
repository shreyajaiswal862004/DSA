class Solution {
private:
vector<vector<int>>rotate(vector<vector<int>>& mat, int n){
    vector<vector<int>>newmat(n,vector<int>(n,0));

    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            newmat[c][n-1-r]=mat[r][c];
        }
    }
    return newmat;
}
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        for(int i=0;i<4;i++){
            if(mat==target) return true;
            mat=rotate(mat,n);
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna