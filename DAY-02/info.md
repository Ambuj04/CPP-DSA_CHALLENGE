**Question Name** : The Painter's Partition Problem-II\
**Question Link** : [https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1](https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)

**My First Approach (Incorrect)->** 
1. Used start = min(arr) → allowed impossible states (a partition cannot be smaller than the largest element)
2. Started partition count from 0 → undercounted partitions

**My Second Approach ->** 
1. Fixed bounds:
 start = max(arr)
 end = sum(arr)
2. Started with count = 1 (first partition already exists)