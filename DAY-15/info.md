**Question Name** : Kth closet to origin\
**Question Link** : [https://leetcode.com/problems/k-closest-points-to-origin/description/](https://leetcode.com/problems/k-closest-points-to-origin/description/)

**My First Approach ->(BRUTE FORCE)** 
1. First create a vector arr which store distance in float and index of the points
2. then sort the vector by distance take O(nlogn) 
3. then by top k which is smallest distance push in the res 

**My Second Approach ->(OPTIMAL)** 
1. use Tuple instead of pair
2. then create a minheap on tuple
3. then push the first k entries in minHeap in format [distance, x , y]
4. after k entries check if the smallest distance is greater than current distance then remove the top entry and push the current entry
5. traverse the heap and store the co-ordinate in res
