**Question Name** : The Kth weakest row in a matrix\
**Question Link** : [https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/](https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/)

**My First Approach ->** 
1. count all soldiers 
2. then push first k entries in heap
3. then compare soldiers number , pop stronger from heap and push weaker 
4. traverse the heap to get res . because maxheap so fill vector back from heap top.


