class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int>maxHeap;
        int stops = 0;
        int i  = 0;
        int n = stations.size();
         while (startFuel < target) {
            // add all reachable stations
            while (i < n && stations[i][0] <= startFuel) {
                maxHeap.push(stations[i][1]);
                i++;
            }
            // if no fuel available → impossible
            if (maxHeap.empty()) return -1;
            // refuel with best option
            startFuel += maxHeap.top();
            maxHeap.pop();
            stops++;
        }
        return stops;
    }
};