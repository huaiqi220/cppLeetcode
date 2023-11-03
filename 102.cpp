


#include "vector"
#include "unordered_map"
#include "queue"



class Solution {

    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    };

public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        std::queue<TreeNode*> que;
        std::unordered_map<TreeNode*, int> map;

        if (root == nullptr)
        {
            std::vector<std::vector<int>> spe;
            return spe;
        }
        backTracking(root, 0, que, map);
        int max_level = 0;
        for (auto item : map)
        {
            if (item.second > max_level) max_level = item.second;
        }
        std::vector<std::vector<int>> res;




        for (int i = 0; i <= max_level; i++)
        {
            std::vector<int> item;
            res.push_back(item);
        }

        while (!que.empty())
        {
            TreeNode* nodept = que.front();
            int val = nodept->val;
            int level = map[nodept];
            res[level].push_back(val);
            que.pop();

        }
            return res;



    }

    void backTracking(TreeNode* root, int level, std::queue<TreeNode*> &que, std::unordered_map<TreeNode*, int> &map) {
        if (root == nullptr)
        {
            return;
        }
        backTracking(root->left, level+1, que, map);
        que.push(root);
        map[root] = level;
        backTracking(root->right, level+1, que, map);

    }

};

// 没想到还真一次跑通了，时间复杂度还挺低，这是我没想到的

// 其实解决树的层序遍历问题，最简单的方案是用队列，不断出结点处理入队列，这是最简便快捷的方法

// 等后面时间多了，把这个方法来实现一遍。

// GPT的评价-------------------------------------------------------------------------------------------
//您提供的代码的目的是对二叉树进行层序遍历，通常会使用队列按层遍历树。不过，您的实现方式中存在一些问题，可能会导致意外行为或错误。
//
//下面是一些明显的问题：
//
//1. **递归函数中的无限循环**:
//   您的 `backTracking` 函数会递归地为节点的左右子节点调用自己。但是递归调用前已经检查了 `nullptr`，因此 `if (root != nullptr)` 这个条件在递归调用时总是为真。这虽然不会导致堆溢出，但它是多余的。
//
//2. **队列的使用**:
//   典型的层序遍历不需要使用递归。通常情况下，您应该将根节点加入队列，然后进入一个循环，在循环中，您会从队列中取出一个节点，处理它，并将其子节点加入队列。您当前结合使用递归、队列和映射进行层序遍历的方式是不常见且不必要的。
//
//3. **层级向量的初始化**:
//   树的层级是从0开始的，但是您初始化 `res` 的循环是运行到 `max_level - 1`（`for (int i = 0; i < max_level; i++)`）。这意味着您会漏掉最后一层。它应该是 `for (int i = 0; i <= max_level; i++)`。
//
//4. **潜在的堆溢出**:
//   如果确实存在堆溢出，很可能是由于您在 `backTracking` 中使用递归的方式导致的。如果树非常深，由于递归调用太多，可能会引起栈溢出。这实际上是栈溢出而不是堆溢出，如果您的树极度不平衡（如链表一样），就会发生这种情况。
//
//以下是一个纠正后的、简化版的层序遍历代码，无需使用递归：
// ---------------------------------------------------------------------------------------------------
