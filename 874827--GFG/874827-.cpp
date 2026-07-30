class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int XOR=0, cnt=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<arr.size();i++){
            XOR^=arr[i];
            if(mpp.find(XOR^k)!=mpp.end()){
                cnt+=mpp[XOR^k];
            }
            mpp[XOR]++;
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna