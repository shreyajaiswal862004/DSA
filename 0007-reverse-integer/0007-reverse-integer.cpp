class Solution {
public:
    int reverse(int x) {
        int sign=1;
        long long digit=0;
        long long num=x;
        if(num<0){
            sign=-1;
            num=-num;
        }
        else{
            sign=1;
        }
        while(num){
            int a = num%10;
            digit=digit*10+a;
            if(sign*digit<=INT_MIN) return 0;
            if(sign*digit>=INT_MAX) return 0;
            num=num/10;
        }
        return (int)sign*digit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna