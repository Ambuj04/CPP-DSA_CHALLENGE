class Solution
{
public:
    bool helper(int guess, vector<int> &arr, int k)
    {
        int count = 1; // critical fix
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (sum + arr[i] <= guess)
            {
                sum += arr[i];
                continue;
            }
            count += 1;
            sum = arr[i];
            if (count > k)
            {
                return false;
            }
        }
        return true;
    }
    int minTime(vector<int> &arr, int k)
    {
        int start = INT_MIN, end = 0, ans = -1;
        for (int num : arr)
        {
            //TC -> O(n)
            start = max(start, num); // critical fix
            end += num;
        }
        while (start <= end)
        {
            //TC-> O(logn)
            int mid = start + (end - start) / 2;
            if (helper(mid, arr, k))
            {
                // first occurance is our ans
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
//TC -> O(n)
//SC -> O(1)