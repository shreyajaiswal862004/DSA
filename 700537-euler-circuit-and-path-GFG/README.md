# [Euler Circuit and Path](https://www.geeksforgeeks.org/problems/euler-circuit-and-path/1?utm=codolio)
## Medium
An Eulerian Path is a path in graph that visits every edge exactly once. An Eulerian Circuit is an Eulerian Path which starts and ends on the same vertex. Given an undirected graph with V nodes, and E edges, with adjacency list adj , where adj[i] stores all the nodes that have an edge with i, return 2 if the graph contains an eulerian circuit, else if the graph contains an eulerian path, return 1, otherwise, return 0.
Examples
Input: 
Output: 2
Explanation: Following is an eulerian circuit in the mentioned graph1 -&gt; 2 -&gt; 0 -&gt; 1
Input: Output: 1
Explanation: Following is an eulerian path in the mentioned graph1 -&gt; 0 -&gt; 2
Constraints:1 ≤ V, E ≤ 1040 ≤ adj[i][j] ≤ V-1