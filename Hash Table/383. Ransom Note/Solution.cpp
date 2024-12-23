class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::unordered_map<char, int> ransomNoteMap;
        std::unordered_map<char, int> magazineMap;
        bool res = true;
        for (auto ch : ransomNote) {
            auto it = ransomNoteMap.find(ch);
            if (it == ransomNoteMap.end()) {
                ransomNoteMap.insert({ch, 1});
            }
            else {
                ransomNoteMap[ch] += 1;
            }
        }
        for (auto ch : magazine) {
            auto it = magazineMap.find(ch);
            if (it == magazineMap.end()) {
                magazineMap.insert({ch, 1});
            }
            else {
                magazineMap[ch] += 1;
            }
        }
        for (auto it = ransomNoteMap.begin(); it != ransomNoteMap.end(); ++it) {
            auto tmp = magazineMap.find(it->first);
            if (tmp == magazineMap.end()) {
                return false;
            }
            else if (tmp->second < it->second) {
                return false;
            }
        }
        return res;
    }
};