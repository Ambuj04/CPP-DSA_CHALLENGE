class Solution
{
public:
    bool helper(int guess, vector<int> &arr, int k)
    {
        int count = 0;//mistake
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
        int start = INT_MAX, end = 0, ans = -1;
        for (int num : arr)
        {
            start = min(start, num);//mistake
            end += num;
        }
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (helper(mid, arr, k))
            {
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