class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx1=0;
        int idx2=0;
        vector<int>ans;
        while(idx1<m && idx2<n){
            if(nums1[idx1]<nums2[idx2]){
                ans.push_back(nums1[idx1++]);
            }
            else{
                ans.push_back(nums2[idx2++]);
            }
        }

        while(idx1<m){
            ans.push_back(nums1[idx1++]);
        }

        while(idx2<n){
            ans.push_back(nums2[idx2++]);
        }

        nums1=ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna