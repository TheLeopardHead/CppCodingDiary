#include <iostream>
#include "Solution.h"

int main() {
    std::string s = "anagram";
    std::string t = "nagaram";
    
    bool result = isAnagram(s, t);
    
    std::cout << "s = " << s << std::endl;
    std::cout << "t = " << t << std::endl;
    std::cout << "结果: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}
