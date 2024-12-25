class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        std::vector<vector<int>> res;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if ((i > 0) && (nums[i-1] == nums[i])) {
                continue;
            }
            for (int j = i + 1; j < nums.size() - 1; ++j) {
                if ((j > i + 1) && (nums[j-1] == nums[j])) {
                    continue;
                }
                int left = j + 1;
                int right = nums.size() - 1;
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum < target) {
                        ++left;
                        while ((left < right) && (nums[left-1] == nums[left])) {
                            ++left;
                        }
                    }
                    else if (sum > target) {
                        --right;
                        while ((left < right) && (nums[right+1] == nums[right])) {
                            --right;
                        }
                    }
                    else {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        ++left;
                        while ((left < right) && (nums[left-1] == nums[left])) {
                            ++left;
                        }  
                    }
                }
            }
        }
        return res;
    }
};