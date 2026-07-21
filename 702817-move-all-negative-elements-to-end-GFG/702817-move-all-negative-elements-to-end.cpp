class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int>neg,pos;
        
        for(auto it:arr){
            if(it<0) neg.push_back(it);
            else pos.push_back(it);
        }
        
        int i=0;
        for(auto x:pos) arr[i++]=x;
        for(auto x:neg) arr[i++]=x;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna