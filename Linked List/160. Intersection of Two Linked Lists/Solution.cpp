#include <algorithm>
#include "ListNode.h"

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lengthA = 0;
    int lengthB = 0;
    ListNode* iter = headA;
    while (iter != nullptr) {
        ++lengthA;
        iter = iter->next;
    }
    iter = headB;
    while (iter != nullptr) {
        ++lengthB;
        iter = iter->next;
    }
    int min = std::min(lengthA, lengthB);
    int max = std::max(lengthB, lengthA);
    ListNode* headMin = (min == lengthA)? headA : headB;
    ListNode* headMax = (max == lengthB)? headB : headA;
    iter = headMax;
    for (int i = 0; i < (max - min); i++) {
        iter = iter->next;
    }
    while (iter != headMin) {
        iter = iter->next;
        headMin = headMin->next;
        if ((iter == nullptr) && (headMin == nullptr)) {
            return NULL;
        }
    }
    return iter;
}