








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

    //void flatten(TreeNode* root) {
    //    TreeNode* node = backTracking(root);

    //}


    //TreeNode* backTracking(TreeNode* node)
    //{
    //    if (node == nullptr)
    //    {
    //        return nullptr;
    //    }
    //    TreeNode* root = node;
    //    root->right = backTracking(node->left);
    //    root->left = nullptr;
    //    TreeNode* last = root;
    //    while (last->right != nullptr)
    //    {
    //        last = last->right;
    //    }
    //    last->right = backTracking(node->right);
    //    return root;

    //}

    //-------------------------------------------------------------------------

    //void flatten(TreeNode* root) {
    //    backTracking(root);

    //}


    //void backTracking(TreeNode* node)
    //{
    //    if (node == nullptr)return;
    //    backTracking(node->left);
    //    backTracking(node->right);

    //    TreeNode* temp = node->right;
    //    node->right = node->left;
    //    node->left = nullptr;

    //    TreeNode* current = node;
    //    // 递归找到左子树最后一个节点
    //    while (current->right != nullptr) {
    //        current = current->right;
    //    }
    //    current->right = temp;

    //}
    //-------------------------------------------------------------------------

    void flatten(TreeNode* root) {
        backTracking(root);

    }


    void backTracking(TreeNode* node)
    {
        if (node == nullptr) return;
        TreeNode* tempRight = node->right;
        backTracking(node->left);
        node->right = node->left;
        node->left = nullptr;
        while (node->right != nullptr)
        {
            node = node->right;
        }
        backTracking(tempRight);
        node->right = tempRight;



    }

};

//
//逻辑本身就很简单，一开始也不用就是设计一个TreeNode* backTracking的复杂方法。
//TreeNode* backTracking方法使用root node last各种指针，因为没有正确处理copy出来的指针导致无限递归
//没有必要，简单题琢磨半小时，要避免这种错误