**Question Name** : Path Sum II\
**Question Link** : [https://leetcode.com/problems/path-sum-ii/](https://leetcode.com/problems/path-sum-ii/)

**My First Approach ->** 
1. Travel all node by dfs
2. a temp array is maintained for store the node's value and res (2D array) is maintained for store multiple path sum array
3. when path sum is found then push temp in res. 
4. Then backtrack (pop from temp) which is needed to found all path sums.
