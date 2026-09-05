class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int>mpp;
        int maxcount=0, i=0;
        for(int j=0;j<n;j++){
            mpp[fruits[j]]++;
            while(mpp.size()>2){
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0) mpp.erase(fruits[i]);
                i++;
            }
            maxcount=max(maxcount,j-i+1);
        }
        return maxcount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna