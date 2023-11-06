








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
    //    // �ݹ��ҵ����������һ���ڵ�
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
//�߼�����ͺܼ򵥣�һ��ʼҲ���þ������һ��TreeNode* backTracking�ĸ��ӷ�����
//TreeNode* backTracking����ʹ��root node last����ָ�룬��Ϊû����ȷ����copy������ָ�뵼�����޵ݹ�
//û�б�Ҫ��������ĥ��Сʱ��Ҫ�������ִ���