class Solution {
  public:
    void func(vector<int>&arr, int multiplier, int& size){
        int carry=0;
        for(int i=0;i<size;i++){
            int res=arr[i]*multiplier;
            res=res+carry;
            arr[i]=res%10;
            carry=res/10;
        }
        
        while(carry>0){
            arr[size++]=carry%10;
            carry=carry/10;
        }
    }
    
    vector<int> factorial(int n) {
        // code here
        vector<int>arr(10000,0);
        arr[0]=1;
        int size=1;
        
        for(int i=2;i<=n;i++){
            func(arr,i,size);
        }
        
        vector<int>res;
        for(int i=size-1; i>=0 ;i--){
            res.push_back(arr[i]);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna