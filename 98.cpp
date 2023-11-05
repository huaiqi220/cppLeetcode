#include "vector"

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
    //bool isValidBST(TreeNode* root) {

    //}


    //bool backTracking(TreeNode* root,int value,char f)
    //{
    //    if (root == nullptr)
    //    {
    //        return true;
    //    }

    //    if (f == 'l')
    //    {
    //        
    //    }
    //    if (f == 'r')
    //    {

    //    }


    //    int val = root->val;
    //    if (backTracking(root->left, val, 'l') == true and backTracking(root->right, val, 'r') == true)
    //    {
    //        return true;
    //    }
    //    else
    //    {
    //        return false;
    //    }


    //}
};