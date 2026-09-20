class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int i=0, n=arr.size();
        while(i<n){
            int mini=i;
            for(int j=i+1; j<n;j++){
                if(arr[j]<arr[mini]){
                    mini=j;
                }
            }
            swap(arr[i],arr[mini]);
            i++;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna