class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // code here
        unordered_map<int,int>mpp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]=i;
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum=arr[i]+arr[j];
                auto it=mpp.find(sum);
                if(mpp.find(sum)!=mpp.end() && it->second!=i && it->second!=j){
                    return true;
                }
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna