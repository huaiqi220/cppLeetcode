

#include <vector>
#include <queue>


class Solution {
	struct TreeNode
	{
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode() :val(0), left(nullptr), right(nullptr) {}

	};

public:
  /*  vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> temp;
        temp.push_back(root);
        while (true) {
            vector<TreeNode*> copyt = temp;
            for (auto item : temp) {
                backTracking(item->left, to_delete, temp);
                backTracking(item->right, to_delete, temp);
            }
            if (temp == copyt) {
                break;

            }
        }
        return temp;

    }

    void backTracking(TreeNode*& root, vector<int>& to_delete, vector<TreeNode*>& temp) {
        if (root == nullptr) return;
        if (std::find(to_delete.begin(), to_delete.end(), root->val) != to_delete.end()) {

            if (root->left != nullptr)temp.push_back(root->left);
            if (root->right != nullptr)temp.push_back(root->right);
            root = nullptr;
            return;
        }
        backTracking(root->left, to_delete, temp);
        backTracking(root->right, to_delete, temp);
    }*/

   /* vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> to_delete_set(to_delete.begin(), to_delete.end());
        vector<TreeNode*> roots;
        dfs(root, true, to_delete_set, roots);
        return roots;
    }

    TreeNode* dfs(TreeNode* node, bool is_root, unordered_set<int> to_delete_set, vector<TreeNode*>& roots) {
        if (node == nullptr) {
            return nullptr;
        }
        bool deleted = to_delete_set.count(node->val) ? true : false;
        node->left = dfs(node->left, deleted, to_delete_set, roots);
        node->right = dfs(node->right, deleted, to_delete_set, roots);
        if (deleted) {
            return nullptr;
        }
        else {
            if (is_root) {
                roots.emplace_back(node);
            }
            return node;
        }
        return nullptr;
    }*/

};