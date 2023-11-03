


#include "vector"
#include "unordered_map"
#include "queue"



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
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        std::queue<TreeNode*> que;
        std::unordered_map<TreeNode*, int> map;

        if (root == nullptr)
        {
            std::vector<std::vector<int>> spe;
            return spe;
        }
        backTracking(root, 0, que, map);
        int max_level = 0;
        for (auto item : map)
        {
            if (item.second > max_level) max_level = item.second;
        }
        std::vector<std::vector<int>> res;




        for (int i = 0; i <= max_level; i++)
        {
            std::vector<int> item;
            res.push_back(item);
        }

        while (!que.empty())
        {
            TreeNode* nodept = que.front();
            int val = nodept->val;
            int level = map[nodept];
            res[level].push_back(val);
            que.pop();

        }
            return res;



    }

    void backTracking(TreeNode* root, int level, std::queue<TreeNode*> &que, std::unordered_map<TreeNode*, int> &map) {
        if (root == nullptr)
        {
            return;
        }
        backTracking(root->left, level+1, que, map);
        que.push(root);
        map[root] = level;
        backTracking(root->right, level+1, que, map);

    }

};

// û�뵽����һ����ͨ�ˣ�ʱ�临�ӶȻ�ͦ�ͣ�������û�뵽��

// ��ʵ������Ĳ���������⣬��򵥵ķ������ö��У����ϳ���㴦������У����������ݵķ���

// �Ⱥ���ʱ����ˣ������������ʵ��һ�顣

// GPT������-------------------------------------------------------------------------------------------
//���ṩ�Ĵ����Ŀ���ǶԶ��������в��������ͨ����ʹ�ö��а��������������������ʵ�ַ�ʽ�д���һЩ���⣬���ܻᵼ��������Ϊ�����
//
//������һЩ���Ե����⣺
//
//1. **�ݹ麯���е�����ѭ��**:
//   ���� `backTracking` ������ݹ��Ϊ�ڵ�������ӽڵ�����Լ������ǵݹ����ǰ�Ѿ������ `nullptr`����� `if (root != nullptr)` ��������ڵݹ����ʱ����Ϊ�档����Ȼ���ᵼ�¶�����������Ƕ���ġ�
//
//2. **���е�ʹ��**:
//   ���͵Ĳ����������Ҫʹ�õݹ顣ͨ������£���Ӧ�ý����ڵ������У�Ȼ�����һ��ѭ������ѭ���У�����Ӷ�����ȡ��һ���ڵ㣬���������������ӽڵ������С�����ǰ���ʹ�õݹ顢���к�ӳ����в�������ķ�ʽ�ǲ������Ҳ���Ҫ�ġ�
//
//3. **�㼶�����ĳ�ʼ��**:
//   ���Ĳ㼶�Ǵ�0��ʼ�ģ���������ʼ�� `res` ��ѭ�������е� `max_level - 1`��`for (int i = 0; i < max_level; i++)`��������ζ������©�����һ�㡣��Ӧ���� `for (int i = 0; i <= max_level; i++)`��
//
//4. **Ǳ�ڵĶ����**:
//   ���ȷʵ���ڶ�������ܿ������������� `backTracking` ��ʹ�õݹ�ķ�ʽ���µġ�������ǳ�����ڵݹ����̫�࣬���ܻ�����ջ�������ʵ������ջ��������Ƕ������������������Ȳ�ƽ�⣨������һ�������ͻᷢ�����������
//
//������һ��������ġ��򻯰�Ĳ���������룬����ʹ�õݹ飺
// ---------------------------------------------------------------------------------------------------
