class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<vector<int>> res;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if ((i > 0) && (nums[i-1] == nums[i])) {
                continue;
            }
            int left = i + 1;
            int right = (i == (nums.size() - 1))? (nums.size() - 2) : (nums.size() - 1);
            while (left < right) {
                if ((nums[i] + nums[left] + nums[right]) < 0) {
                    ++left;
                    while ((left < right) && (nums[left-1] == nums[left])) {
                        ++left;
                    }
                }
                else if ((nums[i] + nums[left] + nums[right]) > 0) {
                    --right;
                    while ((left < right) && (nums[right+1] == nums[right])) {
                        --right;
                    }
                }
                else {
                    res.push_back({nums[i], nums[left], nums[right]});
                    ++left;
                    while ((left < right) && (nums[left-1] == nums[left])) {
                        ++left;
                    }
                }
            }
        }
        return res;
    }
};