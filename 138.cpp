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
#include <unordered_map>
#include <vector>

    class Solution {
    public:
        Node* copyRandomList(Node* head) {
            std::unordered_map<Node*, Node*> originalToCopy;
            std::vector<Node*> newNodes;

            // First pass: create nodes without random pointers
            Node* cur = head;
            while (cur) {
                Node* newNode = new Node(cur->val);
                originalToCopy[cur] = newNode;
                newNodes.push_back(newNode);
                cur = cur->next;
            }

            // Second pass: set next and random pointers
            cur = head;
            for (int i = 0; i < newNodes.size() - 1; ++i) {
                newNodes[i]->next = newNodes[i + 1];
                if (cur->random)
                    newNodes[i]->random = originalToCopy[cur->random];
                cur = cur->next;
            }

            // Handle the last node
            if (cur) {
                newNodes.back()->random = originalToCopy[cur->random];
            }

            return newNodes.empty() ? nullptr : newNodes[0];
        }
    };



};