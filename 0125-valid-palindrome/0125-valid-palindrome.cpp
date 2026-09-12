class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.size()-1;

        while(l<r){
            while(l<r && !isalnum(s[l])) l++;
            while(l<r && !isalnum(s[r])) r--;
            if(tolower(s[l])!=tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int start=0;
//         int end=s.size()-1;
        
//         while(start<end){
//             while(start<end && !isalnum(s[start])) start++;
//             while(start<end && !isalnum(s[end])) end--;
//             if(tolower(s[start])!=tolower(s[end])) return false;
//             start++;
//             end--;
//         }
//         return true;
//     }
// };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna