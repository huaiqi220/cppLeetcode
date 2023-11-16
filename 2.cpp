



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

// 题目虽然简单，但学到的东西不少，
// 与其搞那么多的if，不如直接c = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + int(mark);更方便
// if (l1) l1 = l1->next;
// if (l2) l2 = l2->next; 要学习这种写法
// 创建一个虚拟头节点0，最后删掉，可以避免做法2中在输出结果最后添加节点0的问题。这题答案应该背住

// 除此之外，了解到了堆分配和栈分配的区别


//当然，我很乐意解释这个问题。
//在 C++ 中，创建对象（如 ListNode）可以通过两种主要方式进行：使用栈分配（例如 ListNode n; ）或使用堆分配（例如 new ListNode(); ）。这两种方式的关键区别在于对象的生命周期和内存管理方式。
//栈分配(ListNode n;)
//生命周期：当你在函数内部创建一个如 ListNode n; 的局部变量时，它被分配在栈上。这意味着该对象的生命周期与其所在的作用域（通常是一个函数或一个代码块）绑定。一旦作用域结束，该对象就会自动销毁。
//内存泄漏问题：当你将& n （n 的地址）赋给其他地方，比如 head->next，并退出当前作用域时，n 被销毁，但 head->next 仍指向那个已经不存在的地址。这就造成了悬挂指针（dangling pointer），访问它将导致未定义行为。此外，因为 n 是自动销毁的，你无法手动释放这块内存，这就导致了内存泄漏。
//堆分配(new ListNode();)
//生命周期：使用 new 关键字创建的对象被分配在堆上。这些对象的生命周期不受其创建作用域的限制，它们会一直存在，直到你显式地使用 delete 来销毁它们。
//内存管理：因为堆上的对象不会自动销毁，你需要负责它们的生命周期。这意味着当你不再需要一个通过 new 创建的对象时，你应该使用 delete 来释放分配给它的内存。如果你忘记这么做，就会造成内存泄漏，因为那部分内存仍然被占用，但你已经无法访问或回收它了。
//总结
//使用栈分配（ListNode n; ）时，对象的生命周期受限于创建它的作用域。
//使用堆分配（new ListNode(); ）时，你需要手动管理对象的生命周期，这给你更大的控制权，但也带来了更大的责任（防止内存泄漏）。
//在你的代码中，应该使用 new 来创建链表的节点，因为这些节点的生命周期应该超出创建它们的函数或循环的作用域。这样，当链表不再需要时，你可以遍历链表，逐个删除节点，从而正确地管理内存。
