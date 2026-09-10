class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto it:nums){
            if(it<0) neg.push_back(it);
            else pos.push_back(it);
        }

        int i=0, j=0;
        vector<int>ans(nums.size());
        int a=0;
        while(i<pos.size() && j<neg.size()){
            ans[a++]=pos[i++];
            ans[a++]=neg[j++];
        }

        while(i<pos.size()){
            ans[a++]=pos[i++];
        }

        while(j<neg.size()){
            ans[a++]=neg[j++];
        }
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna