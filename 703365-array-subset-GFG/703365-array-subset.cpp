

class Solution {
public:
    bool isSubset(vector<int> a, vector<int> b) {
        unordered_map<int,int>mpp;
        for(auto it:a){
            mpp[it]++;
        }
        
        for(int i=0;i<b.size();i++){
            if(mpp.find(b[i])==mpp.end()){
                return false;
            }
            mpp[b[i]]--;
            if(mpp[b[i]]==0)mpp.erase(b[i]);
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna