class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = 0;
        stack<int> s;
        // push index instead value because we need to find width.
        s.push(0);
        for (int i = 1; i < n; i++) {
            if (heights[i] <= heights[s.top()]) {
                int nse = i;
                while (!s.empty() && heights[i] <= heights[s.top()]) {
                    int ind = s.top();
                    s.pop();
                    int pse = -1;
                    if (!s.empty()) {
                        pse = s.top();
                    }
                    int width = nse - pse - 1;
                    int height = heights[ind] * width;
                    maxi = max(maxi, height);
                }
            }
            s.push(i);
        }
        while (!s.empty()) {
            // process monotonic height
            int nse = n;
            int ind = s.top();
            s.pop();
            int pse = s.empty() == true ? -1 : s.top();
            //-1 works because of uniformity of index
            int width = nse - pse - 1;
            int height = heights[ind] * width;
            maxi = max(maxi, height);
        }
        return maxi;
    }
};
//TC->O(n)
//SC->O(n)