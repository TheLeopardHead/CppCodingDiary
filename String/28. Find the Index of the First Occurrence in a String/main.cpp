#include "Solution.h"

int main() {
    // Test case for strStr function
    // Find first occurrence of needle string in haystack string
    std::string haystack = "aabaaabaaac";
    std::string needle = "aabaaac";
    
    int result = strStr(haystack, needle);
    
    // Print input strings and result
    std::cout << "haystack = \"" << haystack << "\"" << std::endl;
    std::cout << "needle = \"" << needle << "\"" << std::endl;
    std::cout << "Result: " << result << std::endl; // -1 if not found, index if found
    
    return 0;
}

