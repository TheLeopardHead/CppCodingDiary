/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if ((head == nullptr) || (head->next == nullptr)) {
            return nullptr;
        }
        ListNode* fastPtr = head->next->next;
        ListNode* slowPtr = head->next;
        while ((fastPtr != slowPtr) && (fastPtr != nullptr) && (fastPtr->next != nullptr)) {
            fastPtr = fastPtr->next->next;
            slowPtr = slowPtr->next;
        }
        if ((fastPtr == nullptr) || (fastPtr->next == nullptr)) {
            return nullptr;
        }
        else {
            slowPtr = head;
        }
        while (fastPtr != slowPtr) {
            fastPtr = fastPtr->next;
            slowPtr = slowPtr->next;
        }
        return fastPtr;

    }
};