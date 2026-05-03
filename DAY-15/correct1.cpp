///////////BRUTE FORCE////////////////
class Solution {
public:
    float distance(vector<int>& point) {
        int a = point[0];
        int b = point[1];
        float dist = sqrt((a * a) + (b * b));
        return dist;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<float,int>> arr;
        vector<vector<int>> res;
        int idx = 0;
        for (auto v : points) {
            float dist = distance(v);
            arr.push_back({dist,idx});
            idx++;
        }
        sort(arr.begin(), arr.end());
         for (int i = 0; i < k; i++) {    
            int ansIdx = arr[i].second;
            res.push_back(points[ansIdx]);
        }

        return res;
    }
};
//TC-> O(nlogn)
//SC ->O(n)