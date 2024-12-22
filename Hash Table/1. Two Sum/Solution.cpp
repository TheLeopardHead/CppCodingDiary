class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> resMap;
        std::vector<int> res;
        int cnt = 0;
        for (auto num : nums) {
            auto it = resMap.find(target - num);
            if (it != resMap.end()) {
                res.emplace_back(cnt);
                res.emplace_back(it->second);
                return res;
            }
            resMap.insert(std::make_pair(num, cnt));
            ++cnt;
        }
        return {};
    }
};