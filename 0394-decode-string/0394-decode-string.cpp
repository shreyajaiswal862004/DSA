class Solution {
public:
    string decodeString(string s) {
        stack<int>count;
        stack<string>stringstack;
        int num=0;
        string currentstring="";

        for(auto ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if(ch=='['){
                count.push(num);
                num=0;
                stringstack.push(currentstring);
                currentstring="";
            }
            else if(ch==']'){
                int number=count.top();
                count.pop();
                string prevstring=stringstack.top();
                stringstack.pop();

                for(int i=0;i<number;i++){
                    prevstring+=currentstring;
                }
                currentstring=prevstring;
            }
            else{
                currentstring+=ch;
            }
        }
        return currentstring;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna