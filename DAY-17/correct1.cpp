class Solution {
  public:
    bool isBinaryPalindrome(int n) {
        int reverse = 0; //we make nubmer from right to left
        int temp = n;
        while(temp>0){
            reverse = (reverse<<1) | (temp & 1);
            temp = temp >> 1;
        }
        return reverse == n;
    }
};
//reverse = left shift old reverse bits | last processed digit get in last 
//SC-> O(1)
//TC-> O(logn)