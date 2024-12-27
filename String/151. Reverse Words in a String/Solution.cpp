#include "Solution.h"

std::string reverseWords(std::string s) {
    std::stringstream ss(s);
    std::string tmp;
    std::string res = "";
    while (ss >> tmp) {
        res = tmp + " " + res;
    }
    res.pop_back();
    return res;
}