#include "Solution.h"

int fourSumCount(std::vector<int>& nums1, std::vector<int>& nums2, std::vector<int>& nums3, std::vector<int>& nums4) {
    std::unordered_map<int, int> abSumMap;
    int res = 0;
    for (auto a : nums1) {
        for (auto b :nums2) {
            auto it = abSumMap.find(a+b);
            if (it == abSumMap.end()) {
                abSumMap.insert({(a+b), 1});
            }
            else {
                abSumMap[(a+b)] += 1;
            }
        }
    }
    for (auto c : nums3) {
        for (auto d :nums4) {
            auto it = abSumMap.find(0-c-d);
            if (it != abSumMap.end()) {
                res += abSumMap[0-c-d];
            }
        }
    }
    return res;
}