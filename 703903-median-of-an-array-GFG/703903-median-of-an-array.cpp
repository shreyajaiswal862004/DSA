class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(), arr.end());
        double ans=0.0;
        int mid=arr.size()/2;
        if(arr.size()%2==0){
            ans=(arr[mid]+arr[mid-1])/2.0;
        }
        else{
            ans=arr[mid];
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna