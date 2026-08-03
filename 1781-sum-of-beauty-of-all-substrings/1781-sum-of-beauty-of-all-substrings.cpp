class Solution {
public:
    int beautySum(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int minifreq=INT_MAX, maxifreq=INT_MIN;
                for(auto it:freq){
                    if(it>0){
                        maxifreq=max(maxifreq,it);
                        minifreq=min(minifreq,it);
                    }
                }
                cnt+=(maxifreq-minifreq);
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna