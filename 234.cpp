/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


#include "stack"
#include "vector"



class Solution {

    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };

public:
    bool isPalindrome(ListNode* head) {
        std::vector<int> myv;
        while (head != nullptr)
        {
            int val = head->val;
            myv.push_back(val);
            head = head->next;
        }

        int right = myv.size() - 1;
        int left = 0;
        while (left < right)
        {
            if (myv[left] != myv[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;

    }
};

// 最常见的一种方法，还有优化空间，什么反转链表，什么的