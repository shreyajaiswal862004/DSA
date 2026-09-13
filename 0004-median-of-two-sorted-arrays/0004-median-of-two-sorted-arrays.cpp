class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // Always binary search on the smaller array
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int m = nums1.size();
        int n = nums2.size();

        int low = 0;
        int high = m;

        int half = (m + n + 1) / 2;

        while (low <= high) {

            // Partition of nums1
            int i = (low + high) / 2;

            // Partition of nums2
            int j = half - i;

            // Elements just left and right of partitions
            int Aleft  = (i == 0) ? INT_MIN : nums1[i - 1];
            int Aright = (i == m) ? INT_MAX : nums1[i];

            int Bleft  = (j == 0) ? INT_MIN : nums2[j - 1];
            int Bright = (j == n) ? INT_MAX : nums2[j];

            // Correct partition
            if (Aleft <= Bright && Bleft <= Aright) {

                // Total number of elements is odd
                if ((m + n) % 2 == 1) {
                    return max(Aleft, Bleft);
                }

                // Total number of elements is even
                return (max(Aleft, Bleft) + 
                        min(Aright, Bright)) / 2.0;
            }

            // Too many elements taken from nums1
            else if (Aleft > Bright) {
                high = i - 1;
            }

            // Too few elements taken from nums1
            else {
                low = i + 1;
            }
        }

        return 0.0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna