class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        set<int>st;
        int num=0;
        for(auto it:arr){
            mpp[it]++;
        }
        
        int cnt=arr.size()/k;
        for(auto it:arr){
            st.insert(it);
        }
        
        for(auto it:st){
            if(mpp[it]>cnt) num++;
        }
        return num;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna