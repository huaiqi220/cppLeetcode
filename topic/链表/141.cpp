


#include <vector>
#include <unordered_map>

class Solution {
	struct ListNode
	{
		int val;
		ListNode* next;
		ListNode() :val(0), next(nullptr) {}
		ListNode(int value): val(value),next(nullptr){}
		ListNode(int value, ListNode* nextptr):val(value), next(nextptr) {}
	};
public:
   /* bool hasCycle(ListNode* head) {

        while (head != nullptr) {
            if (head->val != 100001) {
                head->val = 100001;
                head = head->next;
            }
            else if (head->val == 100001) {
                return true;
            }
            else if (head == nullptr) {
                return false;
            }
        }
        return false;


    }*/
    // 直接修改链表值，但破坏了链表的结构，比unordered_map快
};