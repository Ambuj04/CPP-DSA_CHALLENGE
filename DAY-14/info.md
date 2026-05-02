**Question Name** : Rotten Oranges\
**Question Link** : [https://leetcode.com/problems/rotting-oranges/](https://leetcode.com/problems/rotting-oranges/)

**My First Approach ->** 
1. First we declare variables like fresh and time
2. traverse the whole grid and store the co ordinate of rotten oranges in queue
3. then we loop untill all current rotten is process and increase the time by 1 and while looping push all the rotten oranges in queue which process in next time.
4. but there are some oranges in oranges which are still fresh because rotten only in up down left right.
5. if any of fresh remaining return -1 otherwise return time.
