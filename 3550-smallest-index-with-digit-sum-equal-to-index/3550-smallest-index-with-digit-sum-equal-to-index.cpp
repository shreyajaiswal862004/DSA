class Solution {
public:
    int sumof(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==sumof(nums[i])) return i;
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna