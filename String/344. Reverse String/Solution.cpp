class Solution {
public:
    void reverseString(vector<char>& s) {
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
};