
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
	
	// С���ɣ��������ֳ�ʼͷ������Ϊ�յ����
	// ����һ������ͷ�ڵ�dummy,���ֱ�����dummy->next�Ϳ���
	// ���������ٶ��ر��������°취���Ľ�����

};