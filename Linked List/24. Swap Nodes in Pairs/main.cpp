#include "ListNode.h"
#include <iostream>

int main() {
    // Create test linked list [1,2,3,4]
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3); 
    head->next->next->next = new ListNode(4);

    // Call swapPairs function
    ListNode* result = swapPairs(head);

    // Print result
    ListNode* curr = result;
    while(curr != nullptr) {
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    std::cout << std::endl;

    // Free memory
    while(result != nullptr) {
        ListNode* temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}
