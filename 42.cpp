
#include "iostream"
#include "vector"
#include "cmath"
#include "algorithm"


class Solution {
public:

    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
        
    };

    ListNode* sortList(ListNode* head) {

        std::vector<int> list;

        if (head == nullptr)
        {
            return nullptr;
        }


        while (head != nullptr)
        {
            list.push_back(head->val);
            head = head->next;
        }

        sort(list.begin(), list.end());

        ListNode* root = new ListNode(list[0]);
        ListNode* cur = root;

        for (int i = 1; i < list.size(); i++)
        {
            cur->next = new ListNode(list[i], nullptr);
            cur = cur->next;
        }
        return root;


    }
};