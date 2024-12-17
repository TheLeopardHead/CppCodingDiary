/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode;
        dummyHead->next = head;
        ListNode* fastPtr = dummyHead;
        ListNode* slowPtr = dummyHead;
        if (head == nullptr) {
            return head;
        }
        for (int i = 0; i < n; i++) {
            fastPtr = fastPtr->next;
            if ((fastPtr->next == nullptr) && (i != (n-1))) {
                return head;
            }
        }
        while (fastPtr->next != nullptr) {
            fastPtr = fastPtr->next;
            slowPtr = slowPtr->next;
        }
        slowPtr->next = slowPtr->next->next;
        return (dummyHead == slowPtr)? slowPtr->next : dummyHead->next;
    }
};