class Solution {
public:
    bool areNumbersAscending(string s) {
        int num=0, prev=-1;
        bool reading_number=false;
        for(char c:s){
            if(isdigit(c)){
                num=num*10 + (c-'0');
                reading_number=true;
            }
            else if(reading_number){
                if(num<=prev) return false;
                prev=num;
                num=0;
                reading_number=false;
            }
        }

        if(reading_number && prev>=num){
            return false;
        }
        return true;
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna