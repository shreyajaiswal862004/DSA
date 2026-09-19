class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>adj1(n+1);
        vector<vector<int>>adj2(n+1);
        int ans=-1;

        for(auto it:trust){
            adj1[it[0]].push_back(it[1]);
        }

        for(auto it:trust){
            adj2[it[1]].push_back(it[0]);
        }


        for(int i=1;i<=n;i++){
            if(adj1[i].size()==0 && adj2[i].size()==n-1) ans=i;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna