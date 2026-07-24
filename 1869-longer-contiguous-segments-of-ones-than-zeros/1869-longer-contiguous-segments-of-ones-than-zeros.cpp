class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt=1, maxcount0=0, maxcount1=0;
        for(int i=0;i<s.size();i++){
            if(i>0 && s[i]==s[i-1]){
                cnt++;
            }
            else cnt=1;
            if(s[i]=='1'){
                maxcount1=max(maxcount1,cnt);
            }
            else{
                maxcount0=max(maxcount0,cnt);
            }
        }
        return maxcount1>maxcount0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna