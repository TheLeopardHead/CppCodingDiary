class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int back_ptr = 0;
        int sum= 0;
        int length = INT32_MAX;
        for (int front_ptr = 0; front_ptr < nums.size(); front_ptr++){
            sum += nums[front_ptr];
            while (sum >= target){
                length = length > (front_ptr - back_ptr + 1)? (front_ptr - back_ptr + 1) : length;
                sum -= nums[back_ptr];
                back_ptr++;
            }
        }
        return length == INT32_MAX? 0 : length;
    }
};