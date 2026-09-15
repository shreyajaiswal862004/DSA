class Solution {
  public:
    void reverse(int row, vector<vector<int>>& arr){
        int l=0, r=arr[0].size()-1;
        while(l<r){
            swap(arr[row][l],arr[row][r]);
            l++;
            r--;
        }
    }
    void rotateMatrix(vector<vector<int>>& arr) {
        int n=arr.size();
       for(int i=0;i<n;i++){
           for(int j=0;j<i;j++){
               swap(arr[i][j],arr[j][i]);
           }
       }
       
        int top=0, bottom=n-1;
        while(top<bottom){
            swap(arr[top],arr[bottom]);
            top++;
            bottom--;
        }
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna