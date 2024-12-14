#include "ListNode.h"

ListNode* reverseList(ListNode* head) {
    ListNode* iter = head;
    ListNode* pre_node;
    if ((iter == nullptr) || (iter->next == nullptr)) {
        return head;
    }
    while(iter->next != nullptr) {
        ListNode* temp = iter->next;
        if (iter == head) {
            head->next = nullptr;
        } 
        else {
            iter->next = pre_node;
        }
        pre_node = iter;
        iter = temp;
    }
    iter->next = pre_node;
    return iter;
}