class Solution {
public:
    int myAtoi(string s) {
        int i=0, sign=1;
        int size=s.size();
        long long n=0;
        while(i<size && s[i]==' ') i++;
        if(i<size && s[i]=='-' || s[i]=='+'){
            if(s[i]=='-'){
                sign=-1;
            }
            else{
                sign=1;
            }
            i++;
        }
        while(i<size && isdigit(s[i])){
            n=n*10+(s[i]-'0');
            if(sign*n>=INT_MAX) return INT_MAX;
            if(sign*n<=INT_MIN) return INT_MIN;
            i++;
        }
        return (int)n*sign;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna