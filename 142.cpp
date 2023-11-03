

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

// ����ͨ������ʱ��ѿռ䣬��ʵҲ����ʹ������141�Ŀ���ָ�롣
// һ�ָĽ�˼·
//
//�����������ʹ�ÿ���ָ���ж������Ƿ��л������ҵ������㡣Ȼ������һ��ָ������ָ������ͷ����
//��һ��ָ�뱣���������㣬Ȼ������ͬʱ��ǰ�ƶ���ֱ�������ٴ���������������ǻ�����ڵ㡣
//�����������Ҫ����Ŀռ䣬ʱ�临�Ӷ�Ϊ O(n)��������ڻ������᷵�ػ�����ڵ㣻��������ڻ������᷵�� nullptr��