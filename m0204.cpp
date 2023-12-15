



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
  /*  出现了链表断裂，不知道问题在哪
    但这个题目，用less greater数组记录结果，也都是一次遍历，没必要押注一种方法*/


};