class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        vector<int>ans;
        int n1=arr1.size();
        int n2=arr2.size();
        int i=0,j=0;
        
        while(i<n1){
            ans.push_back(arr1[i]);
            i++;
        }
        
        while(j<n2){
            ans.push_back(arr2[j]);
            j++;
        }
        
        sort(ans.begin(), ans.end());
        set<int>st;
        for(auto it:ans){
            st.insert(it);
        }
        ans.clear();
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna