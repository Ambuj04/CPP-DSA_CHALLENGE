// Counter Example : [1,1,1,2,2,3]
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> hashmap;
        for (int num : arr)
        {
            hashmap[num]++;
        }
        int xorr = 0;
        for (auto pairr : hashmap)
        {
            xorr ^= pairr.second;
        }
        if (xorr)
            return true;
        return false;
    }
};