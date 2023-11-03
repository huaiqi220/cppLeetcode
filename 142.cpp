

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include "unordered_map"
class Solution {

    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };

public:
    ListNode* detectCycle(ListNode* head) {
        std::unordered_map<ListNode*, int> map;
        while (head != nullptr)
        {
            if (map[head] != 0)
            {
                return head;
            }
            else
            {
                map[head] = 1;
                head = head->next;
            }
            
            
        }
        return nullptr;

    }
};

// 两次通过，费时间费空间，其实也可以使用类似141的快慢指针。
// 一种改进思路
//
//这个代码首先使用快慢指针判断链表是否有环，并找到相遇点。然后，它将一个指针重新指向链表头部，
//另一个指针保持在相遇点，然后它们同时向前移动，直到它们再次相遇。相遇点就是环的入口点。
//这个方法不需要额外的空间，时间复杂度为 O(n)。如果存在环，它会返回环的入口点；如果不存在环，它会返回 nullptr。