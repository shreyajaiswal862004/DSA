# [Max Sum of 2 Smallest Across Subarrays](https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/1?utm=codolio)
## Medium
Given an array arr[] of integers. Find the maximum sum of the smallest and second smallest elements across all subarrays (of size &gt;= 2) of the given array.
Examples :
Input: arr[] = [4, 3, 5, 1]
Output: 8
Explanation: All subarrays with at least 2 elements and find the two smallest numbers in each:
[4, 3] -&gt; 3 + 4 = 7
[4, 3, 5] -&gt; 3 + 4 = 7
[4, 3, 5, 1] -&gt; 1 + 3 = 4
[3, 5] -&gt; 3 + 5 = 8
[3, 5, 1] -&gt; 1 + 3 = 4
[5, 1] -&gt; 1 + 5 = 6Maximum Score is 8.
Input: arr[] = [1, 2, 3]
Output: 5Explanation: All subarray with at least 2 elements and find the two smallest numbers in each:[1, 2] -&gt; 1 + 2 = 3[1, 2, 3] -&gt; 1 + 2 = 3[2, 3] -&gt; 2 + 3 = 5Maximum Score is 5
