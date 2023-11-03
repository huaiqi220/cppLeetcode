






#include "stack"

class Solution {

    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };


public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head != nullptr) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};

//ListNode* reverseList(ListNode* head) {
//    std::stack<int> myStack;
//    while (head != nullptr)
//    {
//        myStack.push(head->val);
//        head = head->next;
//    }
//
//    ListNode cur = ListNode(myStack.top());
//    myStack.pop();
//    while (!myStack.empty())
//    {
//        ListNode node = ListNode(myStack.top());
//        cur.next = &node;
//        cur = node;
//        myStack.pop();
//
//    }
//    return &cur;
//
//
//}
// 上述为错误解法，问题在于，每次循环之后之前的变量Cur就会被销毁，因此cur.node指向的就是空指针
// 说到底，上述代码最后只会有一个cur对象，且cur对象指的是最后一个node
// 这个题目可以直接创建ListNode *， 根本无须使用构造函数构造节点，再用取址符号&来实现操作
