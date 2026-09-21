class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int sum=0;
        
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                sum=arr[i]+arr[j]+arr[k];
                if(sum==0) return true;
                else if(sum<0) j++;
                else k--;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna