**Question Name** : Path Sum III\
**Question Link** : [https://leetcode.com/problems/path-sum-iii/](https://leetcode.com/problems/path-sum-iii/)

**My First Approach -> (Brute force)** 
1. Travel all node by traverseNode function
2. then find number of path from each node
3. then return the final count 

**My Second Approach -> (Optimal)** 
1. Travel all node via dfs
2. maintain a map which store the frequency of prefix sum
3. Like we get 18 as current Sum and our target is 8 Then if 10 is found means after remove prefix (10) we get out target. and also update frequency of current Sum in map
4. Then we backtrack the frequency of current Sum because we don't want that the prefix sum of previous node is affect the answer of current node
5. also a major thing is mp[0] = 1 because if tree only contain root which is equal to target then the count will be 1.
