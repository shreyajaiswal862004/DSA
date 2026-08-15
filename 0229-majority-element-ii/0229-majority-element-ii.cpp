class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1, el2;
        int count1=0, count2=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && nums[i]!=el2){
                el1=nums[i];
                count1++;
            }
            else if(count2==0 && nums[i]!=el1){
                el2=nums[i];
                count2++;
            }
            else if(el1==nums[i]) count1++;
            else if(el2==nums[i]) count2++;
            else {
                count1--;
                count2--;
            }
        }

        int cnt1=0, cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(el1==nums[i]) cnt1++;
        }
        for(int i=0;i<nums.size();i++){
            if(el2==nums[i]) cnt2++;
        }

        if(cnt1>(nums.size()/3)) ans.push_back(el1);
        if(cnt2>(nums.size()/3)) ans.push_back(el2);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna