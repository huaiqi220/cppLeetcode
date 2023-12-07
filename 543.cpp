

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

// �����������ˣ�����ʵ�ϣ���ʹ�ŵ��ݹ����棬Ҳ��Ч����͵���һ�֣��������������ݹ�����˴������ظ�����


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


// Ψһ�������ڣ�������һ��ret��¼ȫ�����ֵ����ȥ��һ��ݹ�