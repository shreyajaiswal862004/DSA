class Solution {
public:
    set<string> merge(set<string> a, set<string> b) {
        set<string> res;
        for (auto x : a)
            for (auto y : b)
                res.insert(x + y);
        return res;
    }

    set<string> solve(string &s, int &i) {
        set<string> ans;
        set<string> curr = {""};

        while (i < s.size() && s[i] != '}') {

            if (s[i] == ',') {
                ans.insert(curr.begin(), curr.end());
                curr = {""};
                i++;
            }
            else if (s[i] == '{') {
                i++;
                set<string> temp = solve(s, i);
                curr = merge(curr, temp);
            }
            else { // letter
                set<string> temp = {string(1, s[i])};
                curr = merge(curr, temp);
                i++;
            }
        }

        ans.insert(curr.begin(), curr.end());

        if (i < s.size() && s[i] == '}')
            i++;

        return ans;
    }

    vector<string> braceExpansionII(string expression) {
        int i = 0;
        set<string> st = solve(expression, i);

        return vector<string>(st.begin(), st.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna