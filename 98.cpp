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
    //    if (root == nullptr)return true;

    //}
    //bool isValidBST(TreeNode* root ,int maxVal,int minVal,int kind) {
    //    // maxVal ����С���ϼ�����㣬 minVal���ƴ��ڱ��������,1��������2������
    //    if (root == nullptr)return true;
    //    if(kind == 1)if (root->val < maxVal or root->val > minVal) return false;
    //    if(kind == 2)if (root->val > maxVal or root->val < minVal) return false;
    //    
    //    if(kind == 1){
    //        if (isValidBST(root->right, maxVal, 2e31 - 1,2) and isValidBST(root->left, maxVal, -2e31,1))
    //        {
    //            return true;
    //        }
    //    }
    //    return false;

    //}

};