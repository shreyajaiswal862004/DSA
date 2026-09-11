class Solution {
  public:
    void pre(vector<int>&prefix, vector<int>arr){
        prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]=max(prefix[i-1],arr[i]);
        }
    }
    
    void suf(vector<int>&suffix, vector<int>arr){
        int n=arr.size();
        suffix[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],arr[i]);
        }
    }
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        
        pre(prefix,arr);
        suf(suffix,arr);
        
        int total=0;
        for(int i=0;i<n;i++){
            if(prefix[i]>=arr[i] && suffix[i]>=arr[i]){
                total+=(min(prefix[i], suffix[i])-arr[i]);
            }
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna