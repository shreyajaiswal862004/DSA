class Solution {
public:
    void parenthesis(int left, int right, int n , vector<string>&ans, string temp){
        if(left+right==2*n){
            ans.push_back(temp);
            return;
        }

        if(left<n){
            temp.push_back('(');
            parenthesis(left+1,right, n, ans, temp);
            temp.pop_back();
        }

        if(right<left){
            temp.push_back(')');
            parenthesis(left,right+1,n,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        parenthesis(0,0,n,ans,temp);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna