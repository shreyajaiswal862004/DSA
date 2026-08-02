class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans;
        string word;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(!word.empty()){
                    reverse(word.begin(),word.end());
                    ans+=word;
                    ans+=' ';
                    word="";
                }
            }
            else{
                word+=s[i];
            }
        }
        if(!word.empty()){
                    reverse(word.begin(),word.end());
                    ans+=word;
                    ans+=' ';
                    word="";
        }
        if(!ans.empty()){
            ans.pop_back();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna