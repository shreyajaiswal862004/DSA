class Solution {
private:
    int isPossible(int mid, vector<int>& nums, int m, int k ){
        int cnt=0;
        int noOfbouq=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=mid){
                cnt++;
            }
            else{
                noOfbouq+=(cnt/k);
                cnt=0;
            }
        }
        //last element cnt is counted in else loop
        noOfbouq+=(cnt/k);
        return noOfbouq>=m;
    }
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int ans=-1;
        //edge case if no. of bouq to make asked cant be made because of insufficient flower in array;
        long long val = 1LL*m*k;
        if(val>n) return -1;
        for(int i=0;i<n;i++){
            mini=min(mini, nums[i]);
            maxi=max(maxi, nums[i]);
        }

        int low=mini;
        int high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(isPossible(mid, nums, m, k)){
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