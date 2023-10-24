/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include "iostream"
#include "vector"


class Solution {
public:
	struct TreeNode
	{
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode() : val(0), left(nullptr), right(nullptr) {}
		TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
		TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	};


    std::vector<int> preorderTraversal(TreeNode* root) {

		std::vector<int> result;
		subpreorderTraversal(root, result);
		return result;


    }

	void subpreorderTraversal(TreeNode* root, std::vector<int> &result) {

		if (root == nullptr)
		{
			return ;
		}
		else
		{
			result.push_back(root->val);
			subpreorderTraversal(root->left, result);
			subpreorderTraversal(root->right, result);
		}

	}



};

// �ݹ鷽�������Ӿ�����������⣬�������ʱ��ռ临�Ӷȶ��ܸߣ����ǱȽϺõ�������
