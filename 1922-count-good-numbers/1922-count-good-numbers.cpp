class Solution {
const int M = 1e9 + 7;
long long  power(long long  x, long long n){
    long long ans=1;
    x=x%M;
    while(n){
        if(n%2==1){
            ans=(ans*x)%M;
            n=n-1;
        }
        else{
            x=(x*x)%M;
            n=n/2;
        }
    }
    return ans;
}
public:
    int countGoodNumbers(long long n) {
        long long result= (power(5,(n+1)/2) * power(4,n/2))%M;
        return (int)result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna