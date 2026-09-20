class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int a=0;
        int n=arr.size();
        while(a<n){
            for(int i=n-1;i>=a;i--){
                if(i>0 && arr[i]<arr[i-1]){
                    swap(arr[i],arr[i-1]);
                }
            }
            a++;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna