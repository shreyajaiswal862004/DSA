class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(auto it:s){
            if(!st1.empty() && it=='#'){
                st1.pop();
            }
            else if(st1.empty() && it=='#') continue;
            else{
                st1.push(it);
            }
        }

        for(auto it:t){
            if(!st2.empty() && it=='#'){
                st2.pop();
            }
            else if(st2.empty() && it=='#') continue;
            else{
                st2.push(it);
            }
        }

        if(st1.size()!=st2.size()) return false;
        while(!st1.empty() && !st2.empty()){
            char a=st1.top();
            char b=st2.top();
            st1.pop();
            st2.pop();
            if(a!=b) return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna