

#include <vector>
#include <queue>

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
    std::vector<int> rightSideView(TreeNode* root) {

        std::queue<TreeNode*> tempQ;
        std::queue<TreeNode*> tempL;
        std::vector<int> resu;
        if (root == nullptr) return resu;
        tempQ.push(root);
        while (!tempQ.empty())
        {
            TreeNode* fr = tempQ.front();
            if (fr->left)tempL.push(fr->left);
            if (fr->right)tempL.push(fr->right);
            if (tempQ.size() == 1) {
                resu.push_back(tempQ.back()->val);
                tempQ.pop();
                while (!tempL.empty())
                {
                    tempQ.push(tempL.front());
                    tempL.pop();
                }

            }
            else {
                tempQ.pop();
            }

        }
        return resu;
    }
};

// 修了一点小bug，总体做的还是比较快