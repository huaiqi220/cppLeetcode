#include "list"
#include "vector"
#include "deque"


struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int value) : val(value), next(nullptr) {}
	ListNode(int value, ListNode* n) : val(value), next(n) {}
};

class MyLinkedList {
private:
    // 私有类型建议以_开始命名
    int _size;
    ListNode* _dummyHead;

public:
    MyLinkedList() {
        _dummyHead = new ListNode(0);
        _size = 0;
    }

    int get(int index) {
        if (index > (_size - 1) || index < 0) {
            return -1;
        }
        ListNode* cur = _dummyHead->next;
        while (index--) {
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val) {
        _size++;
        ListNode* newNode = new ListNode(val);
        newNode->next = _dummyHead->next;
        _dummyHead->next = newNode;

    }

    void addAtTail(int val) {
        _size++;
        ListNode* newNode = new ListNode(val);
        ListNode* cur = _dummyHead;
        while (cur->next) {
            cur = cur->next;
        }
        cur->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index > _size) return;// 因为之前插入，所以这里其实可以等于_size
        if (index < 0) index = 0;
        ListNode* newNode = new ListNode(val);
        ListNode* cur = _dummyHead;
        while (index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }

    void deleteAtIndex(int index) {
        if (index >= _size || index < 0) {
            return;
        }
        ListNode* cur = _dummyHead;
        while (index--) {
            cur = cur->next;
        }
        ListNode* del = cur->next;
        cur->next = cur->next->next;
        delete(del);
        del = nullptr;
        _size--;
    }

};