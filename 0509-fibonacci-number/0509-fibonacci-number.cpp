class Solution {
public:
    int fib(int n) {
        vector<int>ans(n+1,0);
        if(n<=1) return n;
        ans[0]=0;
        ans[1]=1;

        for(int i=2;i<=n;i++){
            ans[i]=ans[i-1]+ans[i-2];
        }
        return ans[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna