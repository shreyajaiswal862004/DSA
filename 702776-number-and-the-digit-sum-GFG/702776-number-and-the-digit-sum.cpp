class Solution {
  public:
    int sumofdigit(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int numberCount(int n, int k) {
        // code here
        int first=n+1;
        int a=k;
        if(k==0) a=1;
        int low=a, high=n;
        while(low<=high){
            int mid= low + (high - low) / 2;
            if(mid-sumofdigit(mid)>=k){
                first=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        
        if(first==n+1) return 0;
        return n-first+1;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna