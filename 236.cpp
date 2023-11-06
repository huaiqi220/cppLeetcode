








#include "vector"
#include "queue"
#include "stack"


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

    //TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //    std::vector<TreeNode*> tempf1;
    //    std::vector<TreeNode*> resf1;
    //    std::vector<TreeNode*> tempf2;
    //    std::vector<TreeNode*> resf2;
    //    backTracking(root, p, tempf1, resf1);
    //    backTracking(root, q, tempf2, resf2);
    //    int i = 0;
    //    while (true)
    //    {
    //        if (resf1[i] == nullptr && resf2[i] == nullptr)
    //        {
    //            return resf1[i - 1];
    //        }
    //        else if (resf1[i] == resf2[i])
    //        {
    //            i++;
    //        }
    //    }
    //    return nullptr;
    //}

    //void backTracking(TreeNode* root, TreeNode* f, std::vector<TreeNode*> temp, std::vector<TreeNode*>& res)
    //{
    //    if (root == nullptr) return;
    //    if (root == f)
    //    {
    //        temp.push_back(root);
    //        res = temp;
    //        return;
    //    }
    //    temp.push_back(root);
    //    backTracking(root->left, f, temp, res);
    //    backTracking(root->right, f, temp, res);

    //}


    //TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //    std::vector<TreeNode*> tempf1; 
    //    std::vector<TreeNode*> tempf2; 
    //    backTracking(root, p, tempf1);
    //    backTracking(root, q, tempf2);

    //    int minLength = std::min(tempf1.size(), tempf2.size());
    //    TreeNode* lca = nullptr;
    //    for (int i = 0; i < minLength; i++) {
    //        if (tempf1[i] == tempf2[i]) {
    //            lca = tempf1[i];
    //        }
    //        else {
    //            break;
    //        }
    //    }
    //    return lca;




    //}

    //bool backTracking(TreeNode* root, TreeNode* f, std::vector<TreeNode*> &temp)
    //{
    //    if (root == nullptr)return false;

    //    if (root == f)
    //    {
    //        temp.push_back(root);
    //        return true;
    //    }

    //    temp.push_back(root);
    //    backTracking(root->left, f, temp);
    //    backTracking(root->right, f, temp);
    //    temp.pop_back();
    //    return false;

    //}


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        std::vector<TreeNode*> tempf1;
        std::vector<TreeNode*> tempf2;
        backTracking(root, p, tempf1);
        backTracking(root, q, tempf2);

        int minLength = std::min(tempf1.size(), tempf2.size());
        TreeNode* lca = nullptr;
        for (int i = 0; i < minLength; i++) {
            if (tempf1[i] == tempf2[i]) {
                lca = tempf1[i];
            }
            else {
                break;
            }
        }
        return lca;




    }

    bool backTracking(TreeNode* root, TreeNode* f, std::vector<TreeNode*>& temp)
    {
        if (root == nullptr)return false;

        if (root == f)
        {
            temp.push_back(root);
            return true;
        }

        temp.push_back(root);
        if (backTracking(root->left, f, temp) || backTracking(root->right, f, temp))
        {
            return true;
        }
        temp.pop_back();
        return false;

    }

};

//
//参照GPT的提示，加上了一行if(backTracking(root->left, f, temp) || backTracking(root->right, f, temp))
//加上了这个判断之后，代码才通过， 否则在部分用例上会出现输出错误。明天要仔细分析这个部分。
//同时利用pop_back机制，在找不到结果的时候pop输入的节点，就可以用一个容器直接返回路径
//之前自己写代码的时候，又是std::vector<TreeNode*> resf1;的 又是std::vector<std::vector<TreeNode*>> res;的
//明显舍近求远，代码不智慧，要学会这种简单方法