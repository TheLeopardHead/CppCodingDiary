#include <iostream>
#include "Solution.h"

int main() {
    std::vector<int> nums1 = {1, 2};
    std::vector<int> nums2 = {-2, -1}; 
    std::vector<int> nums3 = {-1, 2};
    std::vector<int> nums4 = {0, 2};

    int result = fourSumCount(nums1, nums2, nums3, nums4);
    
    std::cout << "输入:" << std::endl;
    std::cout << "nums1 = [1,2]" << std::endl;
    std::cout << "nums2 = [-2,-1]" << std::endl; 
    std::cout << "nums3 = [-1,2]" << std::endl;
    std::cout << "nums4 = [0,2]" << std::endl;
    std::cout << "输出: " << result << std::endl;

    return 0;
}
