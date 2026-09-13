class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        vector<int>temp1;
        vector<int>temp2;
        vector<int>temp3;
        
        for(auto it:arr){
            if(it<a) temp1.push_back(it);
            else if(it>a && it<b) temp2.push_back(it);
            else if(it>b)temp3.push_back(it);
        }
        
        vector<int>ans;
        for(auto it:temp1) ans.push_back(it);
        for(auto it:temp2) ans.push_back(it);
        for(auto it:temp3) ans.push_back(it);
        arr=ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna