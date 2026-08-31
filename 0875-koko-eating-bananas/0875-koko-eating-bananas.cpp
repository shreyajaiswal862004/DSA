class Solution {
public:
long long reqhrs(int mid, vector<int>&piles){
    long long totalhrs=0;
    for(int i=0;i<piles.size();i++){
        totalhrs+=(piles[i]+mid-1)/mid;
    }
    return totalhrs;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxi=*max_element(piles.begin(),piles.end());
        long long low=1, high=maxi;
        long long ans;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long req= reqhrs(mid,piles);
            if(req<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return (int)ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna