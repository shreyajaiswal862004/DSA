class Solution {
  public:
    int maxEqualSum(vector<int> &s1, vector<int> &s2, vector<int> &s3) {
        // code here
        int sum1=0;
        int sum2=0;
        int sum3=0;
        int top1=0, top2=0, top3=0;
        
        for(int i=0;i<s1.size();i++){
            sum1+=s1[i];
        }
        
        for(int i=0;i<s2.size();i++){
            sum2+=s2[i];
        }
        
        for(int i=0;i<s3.size();i++){
            sum3+=s3[i];
        }
        
        while(1){
            if(top1==s1.size() || top2==s2.size() || top3==s3.size()){
                return 0;
            }
            if(sum1==sum2 && sum2==sum3) return sum1;
            
            if(sum1>=sum2 && sum1>=sum3){
                sum1-=s1[top1++];
            }
            
            else if(sum2>=sum1 && sum2>=sum3){
                sum2-=s2[top2++];
            }
            
            else if(sum3>=sum1 && sum3>=sum2){
                sum3-=s3[top3++];
            }
        }
        return 0;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna