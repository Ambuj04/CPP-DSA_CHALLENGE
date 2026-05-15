**Question Name** : Largest area in histogram\
**Question Link** : [https://leetcode.com/problems/largest-rectangle-in-histogram/description/](https://leetcode.com/problems/largest-rectangle-in-histogram/description/)

**My First Approach ->** 
1. In first approach i find all the possible continuous subsequences then find width and max heigths;

**My Second Approach ->** 
1. (CRITICAL) In whole approach the comparison is in values and all other things like stack , nse , pse is in index of values.
2. In this appraach the idea is the height extend till the next and previous smaller elements
3. monotonic stack is perfect for find next smaller element and previous smaller elements;
4. when the current value is greater than stack top value simply push their index
5. if value of current index is small means we get next smaller element and top contain element and after pop top we next previous smaller element
6. then process the popped element and find maximum height of those
7. But if the heights is monotonic means next smaller element is n and is stack is empty then previous smaller element is -1;








