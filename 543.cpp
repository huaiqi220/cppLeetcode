

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//
#include <vector>
//class Solution {
//
//    struct TreeNode {
//        int val;
//        TreeNode* left;
//        TreeNode* right;
//        TreeNode() : val(0), left(nullptr), right(nullptr) {}
//        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//        TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    };
//public:
//    int diameterOfBinaryTree(TreeNode* root) {
//        if (root == nullptr) return 0;
//        int curDepth = depth(root->right) + depth(root->left) + 1;
//        return std::max(curDepth, std::max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
//
//    }
//
//
//
//
//    int depth(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//
//        return 1 + std::max(depth(root->left), depth(root->right));
//
//
//    }
//};

// 做是做出来了，但事实上，即使放到递归里面，也是效率最低的那一种，问题在于两个递归出现了大量的重复计算


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
        int diameterOfBinaryTree(TreeNode* root) {
            int ret = 0;
            if (root == nullptr) return ret;
            helper(root, ret);
            return ret;
        }
        int helper(TreeNode* root, int& ret) {
            if (root->left == nullptr && root->right == nullptr) return 0;
            int l = 0, r = 0;
            if (root->left) l = helper(root->left, ret) + 1;
            if (root->right) r = helper(root->right, ret) + 1;
            ret = std::max(ret, l + r);
            return std::max(l, r);
        }
};


// 唯一区别在于，他用了一个ret记录全局最大值，少去了一层递归