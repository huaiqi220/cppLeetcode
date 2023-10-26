
//struct listnode {
//    int val;
//    listnode *next;
//    listnode(int x) : val(x), next(null) {}
//};
//
//又费时又费空间，不是个好方法，检测相交链表应该有更巧妙方法。需要学习

#include "map"

class Solution {
public:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(nullptr) {}
    };

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        std::map<ListNode*,bool> nodeMap;

        ListNode* cuheadA = headA;
        while (cuheadA != nullptr)
        {
            nodeMap[cuheadA] = true;
        }
        ListNode* cuheadB = headB;
        while (cuheadB != nullptr)
        {
            if (nodeMap.find(cuheadB) != nodeMap.end())
            {
                return cuheadB;
            }
        }
        return nullptr;



    }
};

//
//int main()
//{
//
//}