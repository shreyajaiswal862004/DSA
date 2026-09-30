# [Find n/k th in Linked list](https://www.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/1?utm=codolio)
## Easy
Given the head of a singly linked list and an integer k, find the (n/k)th node in the linked list, where n is the total number of nodes.If the value of n/k is not an integer, then consider its ceiling value.
Examples:
Input: head: 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6 , k = 2Output: 3Explanation: 6/2th&nbsp;element is the 3rd(1-based indexing) element which is 3.
Input: head: 2-&gt;7-&gt;9-&gt;3-&gt;5 , k = 3Output: 7Explanation: The 5/3rd&nbsp;element is the 2nd element as mentioned in the question that we need to consider ceil value in the case of decimals. So 2nd element is 7.
Constraints:&nbsp;1 &lt;= number of nodes &lt;= 1041 &lt;= k &lt;=&nbsp;number of nodes1 ≤ node-&gt;data ≤ 103