class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans='{';
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target && letters[i]<ans){
                ans=letters[i];
            }
        }

        return ans=='{'?letters[0]:ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna