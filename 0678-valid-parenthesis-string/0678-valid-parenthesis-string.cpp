class Solution {
public:
    bool checkValidString(string s) {
        stack<int>openst;
        stack<int>starst;
        int n=s.size();

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                openst.push(i);
            }
            else if(s[i]==')'){
                if(!openst.empty()){
                    openst.pop();
                }
                else if(!starst.empty()){
                    starst.pop();
                }
                else {
                    return false;
                }
            }
            else if(s[i]=='*'){
                starst.push(i);
            }
        }

        while(!openst.empty() && !starst.empty()){
            if(openst.top()<starst.top()){
                openst.pop();
                starst.pop();
            }
            else return false;
        }
        return openst.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna