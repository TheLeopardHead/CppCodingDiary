#include "Solution.h"

std::string replaceNumber(std::string s) {
    for (int i = 0; i < s.size(); ++i) {
        if ((s[i] >= '0') && (s[i] <= '9')) {
            s = s.substr(0, i) + "number" + s.substr(i+1);
        }
    }
    return s;
}