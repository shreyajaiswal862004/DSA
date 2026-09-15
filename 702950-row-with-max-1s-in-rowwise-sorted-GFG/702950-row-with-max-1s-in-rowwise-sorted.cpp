class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int cnt=0, maxcount=0, row=-1;
        for(int i=0;i<arr.size();i++){
            int cnt=0;
            for(int j=0;j<arr[0].size();j++){
                if(arr[i][j]==1)cnt++;
            }
            if(cnt>maxcount){
                maxcount=cnt;
                row=i;
            }
        }
        return row;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna