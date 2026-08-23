class Solution {
private:
int lower(vector<int>arr, int k){
    int low=0,high=arr.size()-1,idx=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            idx=mid;
        }
        if(arr[mid]>=k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return idx;
}

int upper(vector<int>arr, int k){
    int low=0,high=arr.size()-1,idx=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            idx=mid;
        }
        if(arr[mid]<=k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return idx;
}
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int up=upper(arr,x);
        int low=lower(arr,x);
        vector<int>ans={low,up};
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna