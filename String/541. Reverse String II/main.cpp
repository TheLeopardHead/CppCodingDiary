#include <iostream>
#include "Solution.h"

int main() {
    std::string s = "abcdefg";
    int k = 2;
    
    std::cout << "Original string: " << s << std::endl;
    std::string result = reverseStr(s, k);
    std::cout << "Reversed string: " << result << std::endl;
    
    return 0;
}
