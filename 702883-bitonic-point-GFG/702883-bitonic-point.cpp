class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int n=arr.size(), ans=-1;
        if(arr[0]>arr[1]) return arr[0];
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                ans=arr[i];
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna