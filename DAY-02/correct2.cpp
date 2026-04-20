class Solution
{
public:
    int helper(int guess, vector<int> &arr)
    {
        int count = 1;
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
        }
        return count;
    }
    int minTime(vector<int> &arr, int k)
    {
        int start = INT_MIN, end = 0, ans = -1;
        for (int num : arr)
        {
            start = max(start, num);
            end += num;
        }
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (helper(mid, arr) <= k)
            {
                ans = mid;
                end = mid - 1; // try smaller
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};