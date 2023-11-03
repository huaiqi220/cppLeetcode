






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
// ����Ϊ����ⷨ���������ڣ�ÿ��ѭ��֮��֮ǰ�ı���Cur�ͻᱻ���٣����cur.nodeָ��ľ��ǿ�ָ��
// ˵���ף������������ֻ����һ��cur������cur����ָ�������һ��node
// �����Ŀ����ֱ�Ӵ���ListNode *�� ��������ʹ�ù��캯������ڵ㣬����ȡַ����&��ʵ�ֲ���
