class Solution {
public:
    int longestPalindrome(string s) {
        set<char>st;
        bool take=true;
        int cnt=0;
        unordered_map<char, int>mpp;
        for(auto it:s){
            st.insert(it);
        }

        for(auto it:s){
            mpp[it]++;
        }

        for(auto it:st){
            if(mpp[it]%2){
                cnt+=mpp[it]-1;

                if(take){
                    cnt++;
                    take=false;
                }
            }
            else{
                cnt+=mpp[it];
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna