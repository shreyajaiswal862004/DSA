class Solution {
public:
    void combination(int idx, vector<vector<int>>&ans , vector<int>&temp, vector<int>& candidates, int target, int n, int sum){
        if(idx==n){
            if(sum==target){
                ans.push_back(temp);
            }
            return;
        }

        if(sum+candidates[idx]<=target){
            temp.push_back(candidates[idx]);
            combination(idx+1, ans , temp, candidates, target, n, sum+candidates[idx]);
            temp.pop_back();
        }

        int next=idx+1;
        while(next<n && candidates[next]==candidates[idx]) next++;
            
        combination(next,ans, temp, candidates, target, n, sum);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        combination(0,ans,temp,candidates, target,n,0);
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna