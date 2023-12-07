


#include <vector>

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
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
        if (preorder.size() == 0) return nullptr;
        if (preorder.size() == 1) return new TreeNode(preorder[0]);
        TreeNode* root = new TreeNode(preorder[0]);
        std::vector<std::vector<int>> lsubtree = getsubVec(preorder, inorder, 1);
        std::vector<std::vector<int>> rsubtree = getsubVec(preorder, inorder, 2);

        if(lsubtree[0].size() > 0) root->left = buildTree(lsubtree[0], lsubtree[1]);
        if (rsubtree[1].size() > 0) root->right = buildTree(rsubtree[0], rsubtree[1]);
        return root;
        

    }

    std::vector<std::vector<int>> getsubVec(const std::vector<int>& preorder, const std::vector<int>& inorder, int mark) {
        std::vector<std::vector<int>> res;
        std::vector<int> pre;
        std::vector<int> ino;
        int root = preorder[0];
        int preright1 = -1;
        int inroot = -1;
        for (int i = 0; i < inorder.size(); i++) {
            if (inorder[i] == root) inroot = i;
        }
        if (mark == 1) {
            if (inroot != 0) {
                int preorder_left_end_1 = -1;
                int inoder_left_end_1 = inroot - 1;
                for (int i = 0; i < preorder.size(); i++) {
                    if (preorder[i] == inorder[inoder_left_end_1]) preorder_left_end_1 = i;
                }
                for (int i = 0; i < inroot; i++) {
                    ino.push_back(inorder[i]);
                }
                for (int i = 1; i <= preorder_left_end_1; i++)
                {
                    pre.push_back(preorder[i]);
                }

            }
        }
        if (mark == 2) {
            if (inroot != inorder.size() - 1) {
                int preorder_left_end_1 = -1;
                int inoder_left_end_1 = inroot - 1;
                for (int i = 0; i < preorder.size(); i++) {
                    if (preorder[i] == inorder[inoder_left_end_1]) preorder_left_end_1 = i;
                }
                for (int i = inroot + 1; i < inorder.size(); i++) {
                    ino.push_back(inorder[i]);
                }
                for (int i = preorder_left_end_1 + 1; i < preorder.size(); i++)
                {
                    pre.push_back(preorder[i]);
                }
            }
        }

        res.push_back(pre);
        res.push_back(ino);
        return res;
    }

};

// 丑陋的代码，编码能力低下，这题重点学习