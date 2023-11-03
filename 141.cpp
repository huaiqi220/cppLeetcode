


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


// 这个题，做出来犯了一些错误，在这里记下来，免得再犯
// 1. 对于ListNode* 的fast和slow
// 如果使用*fast == *slow，会报错，因为在ListNode Object 与 ListNode Object对象之间没有 == 运算符
// 2. 如果使用&fast == &slow，会永远输出false，因为两个指针的地址永远不可能相同
// 3. 正常直接fast == slow进行比较就行了
// 4.实现快慢指针，可以在判断head->next存在的情况下 ，直接fast = head->next->next，不用使用t
//
//

// 首先根据计算，环不可能在链中，环必须在最后，设置一个时间为t的快慢指针，快指针一秒一步，慢指针两秒一步
// 相遇证明有环，没相遇就是没有