#include "Solution.h"
#include <unordered_map>

bool isAnagram(std::string s, std::string t) {
    std::unordered_map<char, int> s_map;
    std::unordered_map<char, int> t_map;
    for (char c : s) {
        s_map[c]++;
    }
    for (char c : t) {
        t_map[c]++;
    }
    return s_map == t_map;
}
