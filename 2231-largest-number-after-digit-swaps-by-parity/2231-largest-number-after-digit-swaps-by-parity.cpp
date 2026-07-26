class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        for (int i = 0; i < s.size(); i++) {
            int best = i;

            for (int j = i + 1; j < s.size(); j++) {
                int digit1 = s[j] - '0';
                int digit2 = s[best] - '0';

                if (digit1 % 2 == digit2 % 2 &&
                    digit1 > digit2) {
                    best = j;
                }
            }

            swap(s[i], s[best]);
        }

        return stoi(s);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna