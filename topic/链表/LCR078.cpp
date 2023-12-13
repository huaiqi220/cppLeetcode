
#include <vector>

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
   /* ListNode* mergeKLists(std::vector<ListNode*>& lists) {
		int index = getTheMinNode(lists);
		ListNode* root = lists[index];
		lists[index] = lists[index]->next;
		ListNode* move = root;
		while (getTheMinNode(lists) != -1)
		{
			int curi = getTheMinNode(lists);
			move->next = lists[curi];
			move = move->next;
			lists[curi] = lists[curi]->next;

		}
		return root;
    }

	int getTheMinNode(std::vector<ListNode*>& lists) {
		int index = -1;
		int curMax = 100001;
		for (int i = 0;i < lists.size(); i++)
		{
			if (lists[i] != nullptr && lists[i]->val < curMax) {
				index = i;
				curMax = lists[i]->val;
			}
		}
		
		return index;
	}*/
	ListNode* mergeKLists(std::vector<ListNode*>& lists) {
		ListNode dummy(0);
		ListNode* move = &dummy;

		while (true) {
			int index = getTheMinNode(lists);
			if (index == -1) {
				break;
			}

			move->next = lists[index];
			move = move->next;
			lists[index] = lists[index]->next;
		}

		return dummy.next;
	}

	int getTheMinNode(std::vector<ListNode*>& lists) {
		int index = -1;
		int curMax = 100001;
		for (int i = 0; i < lists.size(); i++)
		{
			if (lists[i] != nullptr && lists[i]->val < curMax) {
				index = i;
				curMax = lists[i]->val;
			}
		}

		return index;
	}
	
	// 小技巧，遇到这种初始头结点可能为空的情况
	// 创建一个虚拟头节点dummy,最后直接输出dummy->next就可以
	// 暴力方法速度特别慢，想下办法，改进方法

};