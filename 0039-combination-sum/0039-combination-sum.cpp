class Solution {
public:
    void combination(int idx, vector<vector<int>>&ans, vector<int>&temp, vector<int>& candidates, int target, int n , int sum ){
        if(idx==n){
            if(sum==target){
                ans.push_back(temp);
            }
            return;
        }

        if(target==0) return;

        if(sum+candidates[idx]<=target){
            temp.push_back(candidates[idx]);
            combination(idx,ans,temp,candidates,target,n,sum+candidates[idx]);
            temp.pop_back();
        }

        combination(idx+1,ans,temp,candidates,target,n,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=candidates.size();
        combination(0,ans,temp, candidates, target, n, 0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna