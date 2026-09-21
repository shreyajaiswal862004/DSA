class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        vector<int>odd;
        vector<int>even;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                odd.push_back(arr[i]);
            }
            else even.push_back(arr[i]);
        }
        
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(), even.end());
        
        arr.clear();
        arr.insert(arr.end(), odd.begin(), odd.end());
        arr.insert(arr.end(), even.begin(), even.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna