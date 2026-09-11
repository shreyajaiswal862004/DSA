class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        unordered_map<int,int>mpp;
        sort(arr.begin(), arr.end());
        for(int i=0;i<arr.size();i++){
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==target) return true;
                
                else if (sum>target) k--;
                else if(sum<target) j++;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna