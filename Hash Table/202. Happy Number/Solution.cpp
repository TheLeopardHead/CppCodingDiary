#include "Solution.h"

bool isHappy(int n) {
    std::unordered_set<int> sumSet;
    std::stringstream ss;
    int sum = n;
    while (sum != 1) {
        auto addNew = sumSet.insert(sum);
        if (!addNew.second) {
            return false;
        }
        ss.str("");
        ss.clear();
        ss << sum;
        sum = 0;
        char ch;
        while (ss >> ch) {
            int tmp = ch - '0';
            sum += tmp * tmp;
        }
    }
    return true;
}