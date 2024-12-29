
#include "Solution.h"

int strStr(std::string haystack, std::string needle) {
    std::vector<int> needlePair;
    needlePair.emplace_back(0);
    int pairCnt = 0;
    int needleIdx = 1;
    int needleCnt = 0;
    while (needleIdx < needle.length()) {
        if (needle[needleIdx] == needle[pairCnt]) {
            ++pairCnt;
            needlePair.emplace_back(pairCnt);
            ++needleIdx;
        }
        else {
            if (pairCnt == 0) {
                needlePair.emplace_back(0);
                ++needleIdx;
            }
            else {
                pairCnt = needlePair[pairCnt-1];
            }
        }
    }

    for (int i = 0; i < haystack.length(); ++i) {
        if (haystack[i] == needle[needleCnt]) {
            ++needleCnt;
            if (needleCnt == needle.length()) {
                return (i-needleCnt+1);
            }
        }
        else {
            if (needleCnt > 0) {
                needleCnt = needlePair[needleCnt-1];
                --i;
            }
        }
    }
    return -1;
}