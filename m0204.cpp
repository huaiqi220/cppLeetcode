



class Solution {
    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };

public:
   /* ListNode* partition(ListNode* head, int x) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        if (head == nullptr)return head;
        ListNode* move = head->next;
        while (move != nullptr) {
            ListNode* moven = move->next;
            if (move->val < x) {
                move->next = dummy->next;
                dummy->next = move;
                move = moven;
            }
            else {
                move->next = head->next;
                head->next = move;
                move = moven;
            }
        }
        return dummy->next;
    }*/
  /*  ������������ѣ���֪����������
    �������Ŀ����less greater�����¼�����Ҳ����һ�α�����û��ҪѺעһ�ַ���*/


};