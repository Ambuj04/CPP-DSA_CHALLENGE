**Question Name** : Cheapest Flights Within K Stops\
**Question Link** : [https://leetcode.com/problems/cheapest-flights-within-k-stops/description/](https://leetcode.com/problems/cheapest-flights-within-k-stops/description/)

**My First Approach ->** 
1. For first i thought dikstra but bellman ford is quite easier
2. In bellman ford algo we have relax edges n-1 times to find shortest path
3. But in question we have only k stops so we do k+1 times realaxation
4. and major challenge in below example if we apply bellman ford with only dist do it gave wrong answer because in first iteration it  realax all the edges which is incorrect.So we take a temp vector to prevent from that case 
0 1 100
1 2 200
2 3 200









