class Solution {
public:
    vector<string> createGrid(int m, int n) {


        vector<string>ans(m,string(n,'#'));

        int i=0, j=0;
        ans[i][j]='.';

        while(i<m-1 || j<n-1){
            if(j<n-1){
                ans[i][j+1]='.';j++;
            }
            
            else if(i<m-1){
                ans[i+1][j]='.';i++;
            }
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna