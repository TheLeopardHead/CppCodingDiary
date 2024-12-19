#include <iostream>
#include "Solution.h"

int main() {
    std::vector<std::string> words = {"bella", "label", "roller"};
    std::vector<std::string> res = commonChars(words);
    for (auto it = res.begin(); it != res.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}