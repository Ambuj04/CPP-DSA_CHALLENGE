///////////////OPTIMAL SOLUTION///////////
class Solution {
public:
//use tuple instead of pair<int,pair<int,int>>
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<tuple<int,int,int>> pq; //maxHeap
        for(int i = 0;i<points.size();i++){
            int x = points[i][0];
            int y = points[i][1];
            int dist = x*x + y*y;
            if(i<k){
                pq.push({dist,x,y});
                continue;
            }
            auto [dT,xT,yT] = pq.top();
            if(dT > dist){
                pq.pop();
                pq.push({dist,x,y});
            }
        }
        vector<vector<int>>res;
        while(!pq.empty()){
            auto [d,x,y] = pq.top();
            pq.pop();
            res.push_back({x,y});
        }
        return res;
    }
};
//TC-> O(nlogK)
//SC ->O(K)