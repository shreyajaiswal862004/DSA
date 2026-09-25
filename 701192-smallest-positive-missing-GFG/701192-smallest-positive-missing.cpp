class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        set<int>st;
        for(auto it:arr){
            st.insert(it);
        }
        
        int i=1;
        bool flag=true;
        int ans;
        while(flag){
            if(st.find(i)==st.end()){
                ans=i;
                flag=false;
            }
            else i++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna