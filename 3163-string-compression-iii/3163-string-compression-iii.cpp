class Solution {
public:
    string compressedString(string word) {
        char ch=word[0];
        int cnt=0;
        string ans;
        for(int i=0;i<word.size();i++){
            if(ch==word[i] && cnt<9){
                cnt++;
            }
            else{
                ans+=to_string(cnt);
                ans.push_back(ch);
                ch=word[i];
                cnt=1;
            }
        }

     
        ans+=to_string(cnt);
        ans.push_back(ch);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna