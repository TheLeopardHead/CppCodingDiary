#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList() : head(nullptr) {
    _size = 0;
}
SingleLinkedList::~SingleLinkedList() {
    ListNode* ptr = head;
    while (ptr != nullptr){
        ListNode* temp = ptr;
        ptr = ptr->next;
        delete temp;
    }
}

int SingleLinkedList::get(int index) {
    int res;
    if (index > _size - 1){
        res =  -1;
    }
    else{
        ListNode* iter = head;
        for(int i = 0; i < index; i++){
            iter = iter->next;
        }
        res = iter->val;
    }
    return res;
}

void SingleLinkedList::addAtHead(int val) {
    ListNode* temp = new ListNode(val, head);
    head = temp;
    ++_size;
}

void SingleLinkedList::addAtTail(int val) {
    if (_size == 0){
        addAtHead(val);
    } 
    else {
        ListNode* iter = head;
        ListNode* tail = new ListNode(val);
        for (int i = 0; i < _size - 1; i++){
            iter = iter->next;
        }
        iter->next = tail;
        ++_size;
    }
}

void SingleLinkedList::addAtIndex(int index, int val) {
    ListNode* iter = head;
    if (index == 0){
        addAtHead(val);
    } else if (index < _size){
        for (int i = 0; i < index - 1; i++){
            iter = iter->next;
        }
        ListNode* add_node = new ListNode(val, iter->next);
        iter->next = add_node;
        ++_size;
    } else if (index == _size){
        ListNode* tail = new ListNode(val);
        for (int i = 0; i < _size - 1; i++){
            iter = iter->next;
        }
        iter->next = tail;
        ++_size;
    }
}

void SingleLinkedList::deleteAtIndex(int index) {
    ListNode* iter = head;
    if (index < _size) {
        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            for (int i = 0; i < index - 1; i++) {
                iter = iter->next;
            }
            ListNode* temp = iter->next;
            iter->next = iter->next->next;
            delete temp;
        }
        --_size;
    }
}

int SingleLinkedList::getSize(){
    return _size;
}




/**
 * Your SingleLinkedList object will be instantiated and called as such:
 * SingleLinkedList* obj = new SingleLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */