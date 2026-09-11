

class Solution {
public:
    bool isSubset(vector<int> a, vector<int> b) {
        unordered_map<int,int>mpp;
        for(auto it:a){
            mpp[it]++;
        }
        
        for(auto it:b){
            if(mpp.find(it)==mpp.end()) return false;
            mpp[it]--;
            if(mpp[it]==0) mpp.erase(it);
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna