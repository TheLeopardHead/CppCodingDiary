class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_set<int> resSet;
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if ((nums[i] + nums[j] == target) && (i != j)) {
                    resSet.insert(i);
                    resSet.insert(j);
                }
            }
        }
        for (auto it : resSet) {
            res.emplace_back(it);
        }
        return res;
    }
};