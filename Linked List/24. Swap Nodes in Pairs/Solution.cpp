#include "ListNode.h"

ListNode* swapPairs(ListNode* head) {
    ListNode* iter = head;
    ListNode* pre_node;
    if ((iter == nullptr) || (iter->next == nullptr)) {
        return iter;
    }
    else {
        while (iter != nullptr) {
            if (iter == head) {
                ListNode* temp = iter->next->next;
                head = head->next;
                head->next = iter;
                iter->next = temp;
                pre_node = iter;
                iter = temp;
            }
            else if (iter->next == nullptr) {
                pre_node->next = iter;
                iter = iter->next;
            }
            else {
                ListNode* temp = iter->next;
                ListNode* next_node = iter->next->next;
                pre_node->next = temp;
                pre_node = iter;
                temp->next = iter;
                iter->next = next_node;
                iter = next_node;
            }
        }
    }
    return head;
}
