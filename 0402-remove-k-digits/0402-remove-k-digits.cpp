class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int n=k;
        for(auto it:num){
            while(n && !st.empty() && st.top()>it){
                st.pop();
                n--;
            }
                st.push(it);
        }  

        while(n){
            st.pop();
            n--;
        }
        string ans(st.size(),0);
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        int x=0;
        while(x<(int)ans.size() && ans[x]=='0') x++;
        ans=ans.substr(x);
        return ans.empty()?"0":ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna