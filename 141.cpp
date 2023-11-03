


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };

public:
    bool hasCycle(ListNode* head) {
        int t = 0;
        ListNode* slow = head;
        ListNode* fast = head;
        while (true)
        {


            if (fast == nullptr)
            {
                return false;
            }
            fast = fast->next;

            if (t % 2 == 1)
            {
                slow = slow->next;
            }
            if (fast == slow)
            {
                return true;
            }
            t++;
        }
        return false;

    }
};

//
//bool hasCycle(ListNode* head) {
//    ListNode* slow = head;
//    ListNode* fast = head;
//    while (fast != nullptr && fast->next != nullptr) {
//        slow = slow->next;        // Move slow pointer by one step
//        fast = fast->next->next;  // Move fast pointer by two steps
//
//        if (slow == fast) {
//            return true;  // If they meet, there is a cycle
//        }
//    }
//    return false;  // If fast reaches the end, there is no cycle
//}


// ����⣬����������һЩ���������������������ٷ�
// 1. ����ListNode* ��fast��slow
// ���ʹ��*fast == *slow���ᱨ����Ϊ��ListNode Object �� ListNode Object����֮��û�� == �����
// 2. ���ʹ��&fast == &slow������Զ���false����Ϊ����ָ��ĵ�ַ��Զ��������ͬ
// 3. ����ֱ��fast == slow���бȽϾ�����
// 4.ʵ�ֿ���ָ�룬�������ж�head->next���ڵ������ ��ֱ��fast = head->next->next������ʹ��t
//
//

// ���ȸ��ݼ��㣬�������������У����������������һ��ʱ��Ϊt�Ŀ���ָ�룬��ָ��һ��һ������ָ������һ��
// ����֤���л���û��������û��