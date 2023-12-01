/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

#include <vector>
#include <unordered_map>

class Solution {
    class Node {
    public:
        int val;
        Node* next;
        Node* random;

        Node(int _val) {
            val = _val;
            next = nullptr;
            random = nullptr;
        }
    };
public:
    // ���д����ܽ���ĸ���죬˵���ף��ؼ�����ʹ��std::unordered_map<Node*, Node*> temp;��ӳ��ԭʼ�����½ڵ�
    // ����������ӳ����ϵݹ飬��������Ŀ�Ĺؼ����ڣ�ʵ�ʵݹ�ʱ�临�Ӷ�һ�㣬�������繹��vector��random vector�ķ���
    // ���뻺�桢��ջ����ȵײ��йأ������ڴ˲������
    std::unordered_map<Node*, Node*> temp;
    Node* copyRandomList(Node* head) {
        if (head == nullptr)return nullptr;
        Node* cur = new Node(head->val);
        temp[head] = cur;
        if (temp[head->next] != 0) {
            cur->next = copyRandomList(head->next);
        }
        else {
            cur->next = temp[head->next];
        }
        if (temp[head->random] != 0) {
            cur->random = copyRandomList(head->random);
        }
        else {
            cur->random = temp[head->random];
        }
        return cur;

    }


    //Node* copyRandomList(Node* head) {
    //    std::unordered_map<Node*, int> temp;
    //    std::vector<int> random;
    //    Node* cur = head;
    //    int i = 1;
    //    while (cur)
    //    {
    //        temp[cur] = i;
    //        i++;
    //        cur = cur->next;
    //    }
    //    for (auto item : temp) {
    //        if (item.first->random == nullptr) {
    //            random.push_back(-1);
    //            continue;
    //        }
    //            random.push_back(temp[item.first->random]);
    //    }

    //    std::vector<Node*> newn(random.size(), nullptr);
    //    for (auto item : temp) {
    //        newn[item.second - 1] = new Node(item.first->val);
    //    }
    //    for (int i = 0; i < random.size(); i++) {
    //        if (random[i] == -1) {
    //            newn[i]->random = nullptr;
    //        }
    //        else {
    //            newn[i]->random = newn[random[i] - 1];
    //        }
    //        
    //    }
    //    for (int i = 0; i < random.size() - 1; i++) {
    //        newn[i]->next = newn[i + 1];
    //    }
    //    newn[random.size() - 1] = nullptr;
    //    return newn[0];

    //}




};