

#include <vector>
#include <unordered_map>

class Solution {
	struct ListNode
	{
		int val;
		ListNode* next;
		ListNode() :val(0), next(nullptr) {}
		ListNode(int value) : val(value), next(nullptr) {}
		ListNode(int value, ListNode* nextptr) :val(value), next(nextptr) {}
	};
public:
   /* ListNode* detectCycle(ListNode* head) {
		std::unordered_map<ListNode*, int> map;
		while (head!=nullptr)
		{
			if (map[head] == 0) {
				map[head] = 1;
				head = head->next;
			}
			else if (map[head] == 1) {
				return head;
			}

		}
		return nullptr;
    }*/
	// ¶¥¼¶µÄÂý
};