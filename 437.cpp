


#include <vector>
#include <deque>


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

    int pathSum(TreeNode* root, int targetSum) {
        int count = 0;
        std::deque<TreeNode*> temp;
        if (root == nullptr) return 0;
        temp.push_back(root);
        while (!temp.empty())
        {
            count += pathFromThis(temp.front(), targetSum);

            if (temp.front()->left)temp.push_back(temp.front()->left);
            if (temp.front()->right)temp.push_back(temp.front()->right);
            temp.pop_front();

        }
        return count;

    }

    int pathFromThis(TreeNode* root, long val) {
        if (root == nullptr) return 0;
        if (root->val == val) return 1 + pathFromThis(root->left, 0) + pathFromThis(root->right, 0);
        if (root->val != val) return pathFromThis(root->left, val - root->val) + pathFromThis(root->right, val - root->val);
        return -1;
    }


    int pathSum(TreeNode* root, int targetSum) {
        int count = 0;
        std::deque<TreeNode*> temp;
        if (root == nullptr) return 0;
        temp.push_back(root);
        while (!temp.empty())
        {
            count += pathFromThis(temp.front(), targetSum);
            temp.pop_front();
            if (temp.front()->left)temp.push_back(temp.front()->left);
            if (temp.front()->right)temp.push_back(temp.front()->right);
            
        }
        return count;
        
    }

    //int pathFromThis(TreeNode* root, int val) {
    //    if (root == nullptr) return 0;
    //    if (root->val > val) return 0;
    //    if (root->val == val) return 1 + pathFromThis(root->left, 0) + pathFromThis(root->right, 0);
    //    if(root->val < val) return pathFromThis(root->left, val - root->val) + pathFromThis(root->right, val - root->val);

    //}
    // 由于涉及到负数，所有这个pathFromThis不能简单的说，大于val就返回路径0，直接比较等于或者不等于就行了
};

// 感觉这个方法的时间复杂度，不高，涉及重复计算，应该优化
