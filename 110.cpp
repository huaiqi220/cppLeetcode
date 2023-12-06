

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

#include <cmath>
#include <algorithm>

class Solution {
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode() :val(0), left(nullptr), right(nullptr) {}
        TreeNode(int i):val(i), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    };
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        else return (isBalanced(root->left) and isBalanced(root->right) and std::abs(getDepth(root->left) - getDepth(root->right)) <= 1);
    }


    int getDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        if (root) {
            return std::max(getDepth(root->left), getDepth(root->right)) + 1;
        }
    }
};

//虽然我今天没做算法题，但为了避免这少一个格子，就还是上传补一个格子