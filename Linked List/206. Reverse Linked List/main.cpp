#include <iostream>
#include "ListNode.h"
using namespace std;

// Print the linked list
void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val;
        if (curr->next != nullptr) {
            cout << "->";
        }
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Create test linked list: 1->2->3->4->5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    // head->next->next = new ListNode(3);
    // head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    cout << "Reversed list: ";
    printList(head);

    // Free memory
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* temp = curr;
        curr = curr->next;
        delete temp;
    }

    return 0;
}

