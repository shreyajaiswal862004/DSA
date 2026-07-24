class Solution {
public:
    bool checkZeroOnes(string s) {
        char ch=s[0];
        int cnt1=0, cnt0=0, maxcount1=0, maxcount0=0;

        if(s[0]=='1'){
            cnt1++;
            maxcount1=max(maxcount1,cnt1);
        }
        if(s[0]=='0'){
            cnt0++;
            maxcount0=max(maxcount0,cnt0);
        }
        for(int i=1;i<s.size();i++){
            if(s[i]==ch){
                if(s[i]=='1'){
                    cnt1++;
                    maxcount1=max(maxcount1,cnt1);
                }
                else{
                    cnt0++;
                    maxcount0=max(maxcount0,cnt0);
                }
            }
            else{
                ch=s[i];
                if(s[i]=='1'){
                    cnt1=1;
                    maxcount1=max(maxcount1,cnt1);
                }
                else cnt0=1;{
                    cnt0=1;
                    maxcount0=max(maxcount0,cnt0);
                }
            }
        }
        return maxcount1>maxcount0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna