# [Number and the Digit Sum](https://www.geeksforgeeks.org/problems/number-and-the-digit-sum4021/1?utm=codolio)
## Easy
Given a positive value n, find the count of numbers smaller than or equal to n such that the difference between the number and the sum of its digits is greater than or equal to a given value k.
Examples:
Input: n = 13, k = 2
Output: 4
Explanation: 10, 11, 12 and 13 satisfy the given condition , 10 - sumofdigit(10) = 9 &gt;= 2, 11 - sumofdigit(11) = 9 &gt;= 2, 12 - sumofdigit(12) = 9 &gt;= 2, 13 - sumofdigit(13) = 9 &gt;= 2.

Input: n = 10, k = 5
Output: 1
Explanation: Only 10 satisfies the given condition as, 10 - sumofdigit(10) = 9 &gt;= 5
Constraints:0 ≤ n, k ≤ 109