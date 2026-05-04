class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>maxHeap;
        int m = mat.size();
        int n = mat[0].size();
        //Traverse the matrix for find number of soldiers
       for(int r = 0;r<m;r++){
            int soldiers = 0;
            for(int c = 0;c<n;c++){
                if(mat[r][c] == 1) soldiers++;
            }
            //store the first k in maxHeap
            if(r<k){
                maxHeap.push({soldiers,r});
                continue;
            }
            auto top = maxHeap.top();
//then after k entries . check if any weak row appear then pop top from maxHeap and push weak row and if soldiers count is same as top of heap then no need to do anything because previous entry is already weak because of low row number
            if(soldiers < top.first ){
                maxHeap.pop();
                maxHeap.push({soldiers,r});
            }
       }
       vector<int>ans(k,0);
       while(!maxHeap.empty()){
            auto top = maxHeap.top();
            maxHeap.pop();
            int r = top.second;
            //answer filling from back side because weakest row stored in last in maxHeap
            ans[k-1] = r; 
            k--;  
       }
        return ans;
    }
};
//TC-> O(m*n + m log k)
//SC-> O(n + k)