class SingleLinkedList {
public:
    SingleLinkedList();
    ~SingleLinkedList();
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
    int getSize();

private:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* ptr) : val(x), next(ptr) {}
    };

    ListNode* head;
    int _size;
};
