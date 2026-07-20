class Solution {
public:
    string stringHash(string s, int k) {
        int n=s.size();
        int result;
        string ans="";
        int a=k;
        int j=0;
        while(j<s.size()){
            int sum=0;
            while(a){
                sum+=s[j]-'a';
                j++;
                a--;
            }
            result= sum%26;
            ans.push_back(result+'a');
            a=k;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna