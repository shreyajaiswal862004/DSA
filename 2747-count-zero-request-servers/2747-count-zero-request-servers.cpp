class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs,
                             int x, vector<int>& queries) {

        int m = logs.size();
        int k = queries.size();

        // Sort logs by time
        sort(logs.begin(), logs.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        // Store query with its original index
        vector<pair<int,int>> q;

        for (int i = 0; i < k; i++) {
            q.push_back({queries[i], i});
        }

        // Sort queries by time
        sort(q.begin(), q.end());

        vector<int> ans(k);
        vector<int> freq(n + 1, 0);

        int left = 0, right = 0;
        int active = 0;

        for (auto it : q) {

            int curr = it.first;
            int idx = it.second;

            // Add logs within the right boundary
            while (right < m && logs[right][1] <= curr) {

                int id = logs[right][0];

                if (freq[id] == 0) {
                    active++;
                }

                freq[id]++;
                right++;
            }

            // Remove logs outside the left boundary
            while (left < right && logs[left][1] < curr - x) {

                int id = logs[left][0];

                freq[id]--;

                if (freq[id] == 0) {
                    active--;
                }

                left++;
            }

            // Servers with no requests
            ans[idx] = n - active;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna