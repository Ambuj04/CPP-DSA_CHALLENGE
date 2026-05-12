class Solution {
  public:
     long long giveTime(vector<int>&arr,int speed,int k){
        long long time = 0;
        for(int num:arr){
            time = time + (num/speed);
            if(num%speed != 0){
                time++;
            }
            if(time > k){
                break;
                //invalid case and don't need to compute furtker time
            }
        }
        return time;
    }
    int kokoEat(vector<int>& arr, int k) {
        int start = 1;
        int end = *max_element(arr.begin(),arr.end()); //max element of vector
        while(start <= end ){
            int guess = start + (end-start)/2;
            if(giveTime(arr,guess,k) > k){
                //we need more speed
                start = guess+1;
            }else{
                //may be answer and need to make answer small
                end = guess-1;
            }
        }
        return start;  
        
    }
};
//TC->O(nlogm) n = number of piles m = maximum bananas in a pile
//SC->O(1)
