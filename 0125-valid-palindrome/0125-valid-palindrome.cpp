class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(auto it:s){
            if(isalnum(it)){
                temp+=tolower(it);
            }
        }

       // temp=tolower(temp);
       int l=0, r=temp.size()-1;
        
        while(l<=r){
            if(temp[l]!=temp[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna