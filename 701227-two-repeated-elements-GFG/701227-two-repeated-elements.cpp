class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>freq(n,0);
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
            if(freq[arr[i]]>1){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna