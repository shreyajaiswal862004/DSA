class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low=0, mid=0, high=arr.size()-1;
        
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else if (arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna