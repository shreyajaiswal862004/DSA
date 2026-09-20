//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>>& mat) {
        // code here
        int cnt=0;
        for(int i=0;i<mat.size();i++){
            int ans=-1;
            int low=0, high=mat[0].size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(mat[i][mid]==0){
                    ans=mid;
                    low=mid+1;
                }
                else high=mid-1;
            }
            if(ans!=-1){
                cnt+=ans+1;
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna