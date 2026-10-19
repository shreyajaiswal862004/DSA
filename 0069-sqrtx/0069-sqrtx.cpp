class Solution {
public:
    int sqrt(int x){
        long long low=1, high=x, ans=0;
        while(low<=high){
            long long mid=high-((high-low)/2);
            if(mid*mid<=x){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return (int)ans;
    }
    int mySqrt(int x) {
        int ans=sqrt(x);
        return ans;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna