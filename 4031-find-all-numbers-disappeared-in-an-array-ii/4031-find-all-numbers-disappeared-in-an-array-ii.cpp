class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        unordered_map<int,int>mpp;
        int up=-1, down=-1;
        vector<vector<int>>ans;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(int i=lower;i<=upper;i++){
            if(mpp.find(i)==mpp.end()){
                if(up==-1){
                    up=i;
                    down=i;
                }
                else down=i;
            }
            else{
                if(up!=-1){
                    ans.push_back({up,down});
                    up=-1;
                    down=-1;
                }
            }
        }

        if(up!=-1){
            ans.push_back({up,down});
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna