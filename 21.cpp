


class Solution {

    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };

public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        while (list2 != nullptr)
        {
            ListNode* cur = nullptr;

            if (list2->val <= list1->val)
            {
                cur = list2->next;
                list2->next = list1;
                list1 = list2;
                list2 = cur;
                continue;
            }
            ListNode* curList1 = list1;
            ListNode* fcurList1 = nullptr;
            while (curList1->val < list2->val)
            {
                if (curList1->next == nullptr) break;
                fcurList1 = curList1;
                curList1 = curList1->next;
            }
            if (curList1->val > list2->val)
            {
                cur = list2->next;
                fcurList1->next = list2;
                list2->next = curList1;
                list2 = cur;
                continue;
            }


            if (curList1->next == nullptr)
            {
                // find the list1 end
                cur = list2->next;
                curList1->next = list2;
                list2->next = nullptr;
                list2 = cur;
                continue;
            }

            cur = list2->next;
            fcurList1->next = list2;
            list2->next = curList1;
            list2 = cur;


        }

        return list1;
    }

};

// 做了我一个小时，真是太焦灼了
// 这题思路特别简单，难的就是细节
// 一个小问题，插入到末尾时候如果不把list2->next置空，在后一个节点又小于list1的时候，就形成了环
// 值相等时如何处理，也需要统一考虑
// 这也配中等？-----> 确实恶心！