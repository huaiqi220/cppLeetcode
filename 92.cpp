


class Solution {

    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count = 1;
        ListNode* cur = head;
        ListNode* l = nullptr;
        ListNode* r = nullptr;
        while (cur != nullptr) {
            cur = cur->next;
            count++;
            if (count = left)
            {
                l = cur;
                continue;
            }

            if (count = right)
            {
                r = cur;
                continue;
            }
        }



    }
};