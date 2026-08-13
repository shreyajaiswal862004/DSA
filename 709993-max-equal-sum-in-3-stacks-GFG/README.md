# [Max Equal Sum in 3 Stacks](https://www.geeksforgeeks.org/problems/find-maximum-equal-sum-of-three-stacks/1?utm=codolio)
## Medium
Given three stacks s1, s2, and s3 of sizes n1, n2, and n3 respectively, containing only positive integers. In one operation, you may remove the top element from any stack. The stacks are represented as arrays where the first element represents the top of the stack. Return the maximum possible equal sum of the three stacks after performing zero or more such operations. If it is not possible to make the sums equal, return 0.
Examples:
Input: s1 = [4,2,3], s2 = [1,1,2,3], s3 = [1,4]
Output: 5
Explanation: We can pop 1 element from the 1st stack, and 2 elements from the 2nd stack. Now remaining elements yield the equal sum of the three stacks, that is 5.

Input: s1 = [4,7], s2 = [10], s3 = [1,2,3]
Output: 0
Explanation: We will never get an equal sum after popping some elements, so the answer will be 0.

Constraints:1&nbsp;≤&nbsp;n1, n2, n3 ≤&nbsp;1051&nbsp;≤ s1[i], s2[i], s3[i]&nbsp;≤&nbsp;103The sum, n1+n2+n3 doesn't exceed 106