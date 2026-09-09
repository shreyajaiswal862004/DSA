class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        //set<int>arr=(nums.begin(),nums.end());
        sort(arr.begin(),arr.end());
        int l=0, r=arr.size()-1;
        vector<vector<int>>ans;
        while(l<r){
            if(arr[l]+arr[r]>0) r--;
            else if (arr[l]+arr[r]<0){
                l++;
            }
            else{
                ans.push_back({arr[l],arr[r]});
                
                l++;
                r--;
                
                while(l<r && arr[l]==arr[l-1]) l++;
                while(l<r && arr[r]==arr[r+1]) r--;
                
            }
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna