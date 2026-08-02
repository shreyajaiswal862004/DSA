class Solution {
public:
    string frequencySort(string s) {
        string vec;
        unordered_map<char, int>mpp;
        for(auto it:s){
            mpp[it]++;
        }

        vector<pair<int,char>>ans;
        for(auto it:mpp){
            ans.push_back({it.second, it.first});
        }

        sort(ans.begin(),ans.end(), greater<pair<int,char>>());
        for(auto it:ans){
            for(int i=0;i<it.first;i++){
                vec+=it.second;
            }
        }
        return vec;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna