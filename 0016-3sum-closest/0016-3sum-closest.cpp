class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=100000;

        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=n-1;

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if (abs(sum - target) < abs(target - ans)) {
                    ans = sum;
                }

                if(sum<target){
                    j++;
                }

                else if(sum>target){
                    k--;
                }
                else{
                    return sum;
                }
            }
        }
        return ans==INT_MAX?0:ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna