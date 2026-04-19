class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> hashmap; // SC-> O(n)
        for (int num : arr)              // TC-> O(n)
            hashmap[num]++;
        unordered_set<int> set; // SC-> O(n)
        for (auto pairr : hashmap)
        { // TC->O(n) for worst case
            int element = pairr.second;
            int flag = set.count(element); // if element is unique then count() return 0
            if (flag)                      // duplicate occurance exist
                return false;
            set.insert(element);
        }
        return true;
    }
};
/*
TC = O(n)
SC = O(n)
*/