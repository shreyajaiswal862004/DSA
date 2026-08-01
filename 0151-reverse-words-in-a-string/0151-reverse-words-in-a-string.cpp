class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string temp;
        string ans;
        for(char ch:s){
            if(ch!=' '){
                temp+=ch;
            }
            else{
                if(!temp.empty()){
                    reverse(temp.begin(),temp.end());
                    if(!ans.empty()){
                        ans+=' ';
                    }
                    ans+=temp;
                    temp="";
                }
            }
        }
        if(!temp.empty()){
            reverse(temp.begin(), temp.end());
                if(!ans.empty()){
                    ans += ' ';
                }
                    ans += temp;
        }
        return ans;
        }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna