




#include <vector>

#include <stack>

class Solution {


    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };



public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        std::vector<ListNode*> temp;
        while (head != nullptr)
        {
            temp.push_back(head);
            head = head->next;
        }

        int index = temp.size() - n;
        temp[index] = nullptr;

        if (index - 1 < 0)
        {
            // ��һ���ڵ�
            if (index + 1 < temp.size())
            {
                return temp[index + 1];
            }
            else
            {
                // ֻ��һ���ڵ㣬 ɾ����nullptr
                return nullptr;
            }
        }
        if (index + 1 < temp.size())
        {
            temp[index - 1]->next = temp[index + 1];

        }
        else
        {
            temp[index - 1]->next = nullptr;
        }
        return temp[0];

    }

    //ListNode* removeNthFromEnd(ListNode* head, int n) {
    //    std::stack<ListNode*> temp;
    //    while (head)
    //    {
    //        temp.push(head);
    //        head = head->next;
    //    }
    //    int cur = 1;
    //    ListNode* e = nullptr;
    //    ListNode* f = nullptr;
    //    while (!temp.empty())
    //    {
    //        if (cur == n and n == 1) {
    //            temp.pop();
    //        }
    //    }
    //}


};

// ������ջ��˫ָ��ʵ�֣������ڵ�vector�����������