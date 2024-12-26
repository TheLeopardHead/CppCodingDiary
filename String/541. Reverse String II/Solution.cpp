#include "Solution.h"

void reverseString(std::string& s) {
    int leftPtr = 0;
    int rightPtr = s.size() - 1;
    char tmp;
    while (rightPtr > leftPtr) {
        tmp = s[leftPtr];
        s[leftPtr] = s[rightPtr];
        s[rightPtr] = tmp;
        --rightPtr;
        ++leftPtr;
    }
}

std::string reverseStr(std::string s, int k) {
    if (s.length() < k) {
        reverseString(s);
    }
    else if ((s.length() >= k) && (s.length() < 2 * k)) {
        std::string tmp = s.substr(0, k);
        reverseString(tmp);
        s.replace(0, k, tmp);
    }
    else {
        std::string tmp = s.substr(0, k);
        reverseString(tmp);
        s.replace(0, k, tmp);
        std::string nextS = s.substr(2 * k);
        std::string nextReverseS = reverseStr(nextS, k);
        s.replace(2 * k, s.length() - 2 * k, nextReverseS);
    }
    return s;
}