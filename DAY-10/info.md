**Question Name** : Dijkstra Algorithm\
**Question Link** : [https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1](https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1)

**My First Approach ->** 
1. First create adj list then create min heap and we solve this by greedy approach
2. mark dist of src to 0 then push in minHeap
3. then process neighbour and apply relaxation method
4. (critical) when we take node form minHeap and it's distance is already small is dist array then no need to process further
5. return the dist array
