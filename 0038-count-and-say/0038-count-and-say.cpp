class Solution {
public:
    string countAndSay(int n) {
        string ans;
        if(n==0) return "";
        ans.push_back('1');
        if(n==1) return ans;

        n--;
        while(n){
            string temp;
            int cnt=1;
            for(int i=0;i<ans.size();i++){
                if(i+1<ans.size() && ans[i]==ans[i+1]){
                    cnt++;
                }
                else{
                    temp+=to_string(cnt);
                    temp.push_back(ans[i]);
                    cnt=1;
                }
            }
            ans=temp;
            n--;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna