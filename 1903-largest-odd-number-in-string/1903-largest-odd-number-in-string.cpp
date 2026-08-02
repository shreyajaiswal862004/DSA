class Solution {
public:
    string largestOddNumber(string num) {
        string temp;
        temp=num;
        int a=-1;

        for(int i=num.size();i>=0;i--){
            int n=num[i]-'0';
            if(n%2!=0){
                a=i;
                break;
            }
        }
        if(a==-1) return "";
        temp.clear();
        for(int i=0;i<=a;i++){
            temp+=num[i];
        }
        return temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna