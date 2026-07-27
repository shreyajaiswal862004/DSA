class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    st.push({i,j});
                }
            }
        }

        while(!st.empty()){
            int row=st.top().first;
            int col=st.top().second;
            st.pop();

            for(int i=0;i<n;i++){
                matrix[i][col]=0;
            }

            for(int i=0;i<m;i++){
                matrix[row][i]=0;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna