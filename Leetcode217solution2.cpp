class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>t;
        for(int x: nums)
        {
            if(t.find(x)!=t.end())
                return true;
            else
                t.insert(x);
        }
        return false;
    }
};
