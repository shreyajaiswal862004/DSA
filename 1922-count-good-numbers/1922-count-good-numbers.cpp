class Solution {
public:
    const int mod=1e9+7;
    long long pow(long long x, long long n){
        long long ans=1;
        while(n){
            if(n%2==0){
                x=(x*x)%mod;
                n=n/2;
            }
            else{
                ans=(ans*x)%mod;
                n=n-1;
            }
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        int mod=1e9+7;
        long long odd=(n/2);
        long long even=(n+1)/2;
        return (int)((pow(4,odd) * pow(5,even))%mod);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna