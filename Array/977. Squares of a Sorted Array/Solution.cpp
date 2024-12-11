class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> res(nums.size());
        for (int i = res.size() - 1; i >= 0; i--){
            if (nums[left] * nums[left] <= nums[right] * nums[right]){
                res[i] = nums[right] * nums[right];
                right--;
            } else {
                res[i] = nums[left] * nums[left];
                left++;
            }
        }
        return res;
    }
};