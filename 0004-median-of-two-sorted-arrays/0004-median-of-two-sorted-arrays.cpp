class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int id1=0, id2=0, n1=nums1.size(), n2=nums2.size();

        while(id1<n1 && id2<n2){
            if(nums1[id1]<nums2[id2]){
                ans.push_back(nums1[id1]);
                id1++;
            }
            else if(nums1[id1]>nums2[id2]){
                ans.push_back(nums2[id2]);
                id2++;
            }
            else {
                ans.push_back(nums1[id1]);
                id1++;
            }
        }

        while(id1<n1){
            ans.push_back(nums1[id1]);
            id1++;
        }

        while(id2<n2){
            ans.push_back(nums2[id2]);
            id2++;
        }

        if(ans.size()%2==0){
            int n=ans.size()/2;
            int m=n-1;
            return (double)(ans[n]+ans[m])/2;
        }

        int n=ans.size();
        return (double)ans[n/2];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna