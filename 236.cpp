








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
//����GPT����ʾ��������һ��if(backTracking(root->left, f, temp) || backTracking(root->right, f, temp))
//����������ж�֮�󣬴����ͨ���� �����ڲ��������ϻ���������������Ҫ��ϸ����������֡�
//ͬʱ����pop_back���ƣ����Ҳ��������ʱ��pop����Ľڵ㣬�Ϳ�����һ������ֱ�ӷ���·��
//֮ǰ�Լ�д�����ʱ������std::vector<TreeNode*> resf1;�� ����std::vector<std::vector<TreeNode*>> res;��
//���������Զ�����벻�ǻۣ�Ҫѧ�����ּ򵥷���