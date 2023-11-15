


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

// ������һ��Сʱ������̫������
// ����˼·�ر�򵥣��ѵľ���ϸ��
// һ��С���⣬���뵽ĩβʱ���������list2->next�ÿգ��ں�һ���ڵ���С��list1��ʱ�򣬾��γ��˻�
// ֵ���ʱ��δ���Ҳ��Ҫͳһ����
// ��Ҳ���еȣ�-----> ȷʵ���ģ�