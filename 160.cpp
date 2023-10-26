
//struct listnode {
//    int val;
//    listnode *next;
//    listnode(int x) : val(x), next(null) {}
//};
//
//�ַ�ʱ�ַѿռ䣬���Ǹ��÷���������ཻ����Ӧ���и����������Ҫѧϰ

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