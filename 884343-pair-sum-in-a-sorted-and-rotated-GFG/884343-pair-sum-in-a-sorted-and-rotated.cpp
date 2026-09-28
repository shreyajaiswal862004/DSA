class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int r=arr.size()-1,l,n=arr.size();
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[(i+1)]){
                r=i;
                break;
            }
        }
        
        l=(r+1)%n;
        
        while(l!=r){
            if(arr[l]+arr[r]==target) return true;
            else if(arr[l]+arr[r]>target){
                r=(r-1+n)%n;
            }
            else l=(l+1)%n;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna