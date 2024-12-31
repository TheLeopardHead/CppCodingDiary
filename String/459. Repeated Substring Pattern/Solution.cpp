class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        std::vector<int> next;
        int cnt = 0;
        int id = 1;
        next.emplace_back(0);
        if (s.length() == 1) {
            return false;
        }
        while (id < s.length()) {
            if (s[id] == s[cnt]) {
                ++cnt;
                next.emplace_back(cnt);
                ++id;
            } else {
                if (cnt == 0) {
                    next.emplace_back(0);
                    ++id;
                } else {
                    cnt = next[cnt - 1];
                }
            }
        }
        auto maxIt = std::max_element(next.begin(), next.end());
        if (maxIt != next.end() - 1) {
            return false;
        } else {
            for (int i = *maxIt; i < s.length(); ++i) {
                if (s[i] != s[i % *maxIt]) {
                    return false;
                }
            }
        }
        return true;
    };
};
