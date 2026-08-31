class Solution {
public:
int isPossible(int mid, vector<int>&bloomDay, int k, int m){
    int cnt=0, noOfbouq=0;

    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            cnt++;
        }
        else{
            noOfbouq+=(cnt/k);
            cnt=0;
        }
    }
    noOfbouq+=(cnt/k);
    return noOfbouq>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int ans=-1;
        long long val = 1LL*m*k;
        if(val>n) return -1;

        for(int i=0;i<bloomDay.size();i++){
            if(mini>bloomDay[i]){
                mini=bloomDay[i];
            }
            if(maxi<bloomDay[i]){
                maxi=bloomDay[i];
            }
        }

        int low=mini, high=maxi;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(isPossible(mid,bloomDay,k,m)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna