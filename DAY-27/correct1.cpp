class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = 0;
        for(int i = 0;i<n;i++){
            int mini = INT_MAX;
            for(int j = i;j<n;j++){
                mini = min(mini,heights[j]);
                maxi = max(maxi,mini*(j-i+1));
            }
        }
        return maxi;
    }
};
//TC->O(n^2)
//SC->O(n)