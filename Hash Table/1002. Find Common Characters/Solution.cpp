#include "Solution.h"

std::vector<std::string> commonChars(std::vector<std::string>& words) {
    std::vector<std::string> res;
    std::unordered_map<char, int> commonMap;
    std::unordered_map<char, int> diffMap;
    for (char c : words[0]) {
        ++commonMap[c];
    }
    for (auto word = words.begin() + 1; word != words.end(); ++word) {
        diffMap.clear();
        for (auto it = (*word).begin(); it != (*word).end(); ++it) {
            ++diffMap[*it];
        }
        std::vector<char> charsToErase = {};
        for (auto it = commonMap.begin(); it != commonMap.end(); ++it) {
            if(diffMap.find(it->first) == diffMap.end()) {
                charsToErase.emplace_back(it->first);
            }
            else {
                if(diffMap[it->first] < it->second) {
                    commonMap[it->first] = diffMap[it->first];
                }
            }
        }
        for (auto it = charsToErase.begin(); it != charsToErase.end(); ++it) {
            commonMap.erase(*it);
        }
    }
    for (auto it = commonMap.begin(); it != commonMap.end(); ++it) {
        if (it->second > 1) {
            for (int i = 0; i < it->second; ++i) {
                res.emplace_back(std::string(1, it->first));
            }
        }
        else {
            res.emplace_back(std::string(1, it->first));
        }
    }
    return res;
}