#include <vector>




class Solution {
    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int value) : val(value), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}

    };
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        std::vector<ListNode*> temp;
        while (head) { temp.push_back(head); head = head->next; }
        int index = 0;
        while (index <= temp.size()) {
            swapByK(temp, index, k);
            index = index + k;
        }
        for (int i = 0; i < temp.size() - 1; i++) {
            temp[i]->next = temp[i + 1];
        }
        temp[temp.size() - 1]->next = nullptr;
        return temp[0];
    }

    void swapByK(std::vector<ListNode*>& temp, int index, int k) {
        int start = index;
        int end = index + k - 1;
        if (end > temp.size() - 1)return;
        while (start < end) {
            ListNode* te = temp[end];
            temp[end] = temp[start];
            temp[start] = te;
            start++; end--;
        }
    }



};