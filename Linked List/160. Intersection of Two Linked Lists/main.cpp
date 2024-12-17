#include <iostream>
#include "ListNode.h"

int main() {
    // Create test cases
    ListNode* listA = new ListNode(1);  // listA = [1]
    ListNode* listB = new ListNode(2);  // listB = [2]
    
    // Call function to test
    ListNode* result = getIntersectionNode(listA, listB);
    
    // Verify result
    if (result == nullptr) {
        std::cout << "Test passed: No intersection found" << std::endl;
    } else {
        std::cout << "Test failed: Expected nullptr" << std::endl;
    }
    
    // Free memory
    delete listA;
    delete listB;
    
    return 0;
}

