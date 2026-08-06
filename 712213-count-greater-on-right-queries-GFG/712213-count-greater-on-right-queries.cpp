class Solution {
  public:
    vector<int> countGreater(vector<int> &arr, vector<int> &indices) {
        // code here
        vector<int>ans;
        for(auto it:indices){
            int el=arr[it];
            int cnt=0;
            for(int i=it+1; i<=arr.size()-1;i++){
                if(arr[i]>el) cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna