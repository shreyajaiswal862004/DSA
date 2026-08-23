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
    int countFreq(vector<int>& arr, int target) {
        // code here
        int up=upper(arr,target);
        int low=lower(arr,target);
        return (up==-1 || low==-1)?0:(up-low)+1;
        
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna