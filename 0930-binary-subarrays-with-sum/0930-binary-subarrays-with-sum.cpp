class Solution {
public:
    int subarray1(vector<int>& nums, int goal){
        int cnt=0;
        int l=0, r=0, n=nums.size();
        long long  sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal && l<=r){
                sum=sum-nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }

    int subarray2(vector<int>& nums, int goal){
        int cnt=0;
        int l=0, r=0, n=nums.size();
        long long sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal-1 && l<=r){
                sum-=nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt1=0, cnt2=0;

        cnt1= subarray1(nums,goal);
        cnt2= subarray2(nums,goal);

        return cnt1-cnt2;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna