class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto x:nums){
            if(x<0) neg.push_back(x);
            else pos.push_back(x);
        }

        int posi=0;
        int negi=0;
        int i=0;
        while(posi<pos.size()&& negi<neg.size()){
            nums[i++]=pos[posi++];
            nums[i++]=neg[negi++];
        }

        while(posi<pos.size()){
            nums[i++]=pos[posi++];
        }

        while(negi<neg.size()){
            nums[i++]=neg[negi++];
        }
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna