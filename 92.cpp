

#include <vector>


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
        ListNode* cur = head;
        ListNode* temp = nullptr;
        std::vector<ListNode*> nodeVector;
        while (cur != nullptr)
        {
            nodeVector.push_back(cur);
            // cur = cur->next;

            temp = cur->next;
            cur->next = nullptr;
            cur = temp;
        }

        while (left < right)
        {
            swap(nodeVector, left, right);
            left++;
            right--;
        }

        return vec2list(nodeVector);

    }

    void swap(std::vector<ListNode*> &nodeVector, int left, int right)
    {
        ListNode* end = nodeVector[right - 1];
        nodeVector[right - 1] = nodeVector[left - 1];
        nodeVector[left - 1] = end;
    }

    ListNode* vec2list(std::vector<ListNode*>& nodeVector)
    {
        ListNode* head = nodeVector[0];
        ListNode* cur = nodeVector[0];

        for (int i = 1; i < nodeVector.size();i++)
        {
            cur->next = nodeVector[i];
            cur = nodeVector[i];
        }

        return head;
    }

};

// 方法不是最优，经过三次遍历，需要改进