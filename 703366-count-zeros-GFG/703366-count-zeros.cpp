class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int low=0, high=arr.size()-1, idx=-1, n=arr.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==1){
                idx=mid;
                low=mid+1;
            }
            else if(arr[mid]==0){
                high=mid-1;
            }
        }
        
        int count=0;
        if(idx!=-1){
            count=(n-1)-idx;
        }
        
        return idx==-1? n:count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna