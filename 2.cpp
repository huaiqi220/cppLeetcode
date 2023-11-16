



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
    //ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    //    int num1 = 0;
    //    int num2 = 0;
    //    int multi1 = 1;
    //    int multi2 = 1;
    //    while (l1!= nullptr)
    //    {
    //        num1 = l1->val * multi1;
    //        multi1 *= 10;
    //    }

    //    while (l2 != nullptr)
    //    {
    //        num2 = l2->val * multi2;
    //        multi2 *= 10;
    //    }

    //    int res = num1 + num2;
    //    ListNode* head = &ListNode();
    //    ListNode* cur = head;
    //    while (res != 0)
    //    {
    //        int c = res % 10;
    //        int res = res / 10;
    //        cur->val = c;
    //        ListNode temp = ListNode();
    //        cur->next = &temp;
    //        cur = cur->next;
    //    }

    //    return head;


    //}
    //ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //    bool mark = false;
    //    ListNode f = ListNode();
    //    ListNode* head = &f;
    //    while (l1 || l2)
    //    {
    //        if (l1 != nullptr and l2 != nullptr)
    //        {
    //            int c = l1->val + l2->val + int(mark);
    //            if (c >= 10) {
    //                mark = true;
    //            }
    //            head->val = c % 10;
    //            head->next = new ListNode(c % 10);
    //            head = head->next;
    //            l1 = l1->next;
    //            l2 = l2->next;
    //            continue;
    //        }

    //        if (l1 != nullptr)
    //        {
    //            int c = l1->val + int(mark);
    //            if (c >= 10) {
    //                mark = true;
    //            }
    //            head->val = c % 10;
    //            head->next = new ListNode(c % 10);
    //            head = head->next;
    //            l1 = l1->next;
    //            continue;

    //        }
    //        if (l2 != nullptr)
    //        {
    //            int c = l2->val + int(mark);
    //            if (c >= 10) {
    //                mark = true;
    //            }
    //            head->val = c % 10;
    //            head->next = new ListNode(c % 10);
    //            head = head->next;
    //            l2 = l2->next;
    //            continue;

    //        }

    //    }
    //    if (mark == true)
    //    {
    //        head->next = new ListNode(1);
    //    }
    //    return &f;
    //}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool mark = false;
        ListNode* f = new ListNode(0);
        ListNode* head = f;
        while (l1 || l2)
        {
            if (l1 != nullptr || l2 != nullptr || mark)
            {
                int c = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + int(mark);
                if (c >= 10) {
                    mark = true;
                }
                else {
                    mark = false;
                }
                head->next = new ListNode(c % 10);
                head = head->next;
                if (l1) l1 = l1->next;
                if (l2) l2 = l2->next;
                continue;
            }

        }
        if (mark)
        {
            head->next = new ListNode(1);
        }
        ListNode* res = f->next;
        delete(f);
        return res;
    }
};

// ��Ŀ��Ȼ�򵥣���ѧ���Ķ������٣�
// �������ô���if������ֱ��c = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + int(mark);������
// if (l1) l1 = l1->next;
// if (l2) l2 = l2->next; Ҫѧϰ����д��
// ����һ������ͷ�ڵ�0�����ɾ�������Ա�������2���������������ӽڵ�0�����⡣�����Ӧ�ñ�ס

// ����֮�⣬�˽⵽�˶ѷ����ջ���������


//��Ȼ���Һ��������������⡣
//�� C++ �У����������� ListNode������ͨ��������Ҫ��ʽ���У�ʹ��ջ���䣨���� ListNode n; ����ʹ�öѷ��䣨���� new ListNode(); ���������ַ�ʽ�Ĺؼ��������ڶ�����������ں��ڴ����ʽ��
//ջ����(ListNode n;)
//�������ڣ������ں����ڲ�����һ���� ListNode n; �ľֲ�����ʱ������������ջ�ϡ�����ζ�Ÿö�������������������ڵ�������ͨ����һ��������һ������飩�󶨡�һ��������������ö���ͻ��Զ����١�
//�ڴ�й©���⣺���㽫& n ��n �ĵ�ַ�����������ط������� head->next�����˳���ǰ������ʱ��n �����٣��� head->next ��ָ���Ǹ��Ѿ������ڵĵ�ַ��������������ָ�루dangling pointer����������������δ������Ϊ�����⣬��Ϊ n ���Զ����ٵģ����޷��ֶ��ͷ�����ڴ棬��͵������ڴ�й©��
//�ѷ���(new ListNode();)
//�������ڣ�ʹ�� new �ؼ��ִ����Ķ��󱻷����ڶ��ϡ���Щ������������ڲ����䴴������������ƣ����ǻ�һֱ���ڣ�ֱ������ʽ��ʹ�� delete ���������ǡ�
//�ڴ������Ϊ���ϵĶ��󲻻��Զ����٣�����Ҫ�������ǵ��������ڡ�����ζ�ŵ��㲻����Ҫһ��ͨ�� new �����Ķ���ʱ����Ӧ��ʹ�� delete ���ͷŷ���������ڴ档�����������ô�����ͻ�����ڴ�й©����Ϊ�ǲ����ڴ���Ȼ��ռ�ã������Ѿ��޷����ʻ�������ˡ�
//�ܽ�
//ʹ��ջ���䣨ListNode n; ��ʱ��������������������ڴ�������������
//ʹ�öѷ��䣨new ListNode(); ��ʱ������Ҫ�ֶ����������������ڣ���������Ŀ���Ȩ����Ҳ�����˸�������Σ���ֹ�ڴ�й©����
//����Ĵ����У�Ӧ��ʹ�� new ����������Ľڵ㣬��Ϊ��Щ�ڵ����������Ӧ�ó����������ǵĺ�����ѭ��������������������������Ҫʱ������Ա����������ɾ���ڵ㣬�Ӷ���ȷ�ع����ڴ档
