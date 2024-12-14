#include <iostream>
#include "SingleLinkedList.h"
using namespace std;

// Print all elements in the linked list
void printList(SingleLinkedList* list) {
    cout << "Current list: ";
    for(int i = 0; i < list->getSize(); i++) {
        cout << list->get(i) << " ";
    }
    cout << endl;
    cout << "Size of list: " << list->getSize() << endl;
}

int main() {
    // Initialize new linked list
    SingleLinkedList* list = new SingleLinkedList();
    cout << "Initialize linked list" << endl;
    printList(list);
    
    // Insert 10 at index 0
    cout << "\nExecute addAtIndex(0,10)" << endl; 
    list->addAtIndex(0, 10);
    printList(list);
    
    // Insert 20 at index 0
    cout << "\nExecute addAtIndex(0,20)" << endl;
    list->addAtIndex(0, 20);
    printList(list);
    
    // Insert 30 at index 1
    cout << "\nExecute addAtIndex(1,30)" << endl;
    list->addAtIndex(1, 30);
    printList(list);
    
    // Get element at index 0
    cout << "\nExecute get(0)" << endl;
    cout << "Element at index 0: " << list->get(0) << endl;
    
    // Clean up memory
    delete list;
    
    cout << "\nAll operations completed!" << endl;
    return 0;
}
