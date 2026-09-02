class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;              // stores indices of unmatched '(' 
        vector<bool> remove(s.size(), false);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } 
            else if (s[i] == ')') {
                if (st.empty()) {
                    remove[i] = true;      // no matching '(' for this ')'
                } else {
                    st.pop();               // matched! keep both
                }
            }
            // any other character (letters) — do nothing, keep it
        }

        // whatever '(' indices are still on the stack are unmatched
        while (!st.empty()) {
            remove[st.top()] = true;
            st.pop();
        }

        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (!remove[i]) ans.push_back(s[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna