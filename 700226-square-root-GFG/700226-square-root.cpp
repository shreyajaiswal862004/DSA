class Solution {
  public:
 
 int sq(int n){
     int ans=1;
     for(int i=1;i<=n;i++){
         if(i*i<=n){
             ans=i;
         }
     }
     return ans;
 }
    int floorSqrt(int n) {
        // code here
        int a = sq(n);
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna