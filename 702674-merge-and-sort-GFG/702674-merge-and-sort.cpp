class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        vector<int>ans;
        set<int>st;
        for(auto it:arr1) st.insert(it);
        for(auto it:arr2) st.insert(it);
        
        for(auto it:st){
            ans.push_back(it);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna