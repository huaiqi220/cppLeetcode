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




	std::vector<int> inorderTraversal(TreeNode* root) {

		std::vector<int> result;
		subinorderTraversal(root, result);
		return result;


	}

	void subinorderTraversal(TreeNode* root, std::vector<int>& result) {

		if (root == nullptr)
		{
			return;
		}
		else
		{
			subinorderTraversal(root->left, result);
			result.push_back(root->val);
			subinorderTraversal(root->right, result);
		}

	}


};

//
//ʱ��
//����
//4ms
//���� 39.99 % ʹ�� C++ ���û�
//�ڴ�
//����
//8.23MB
//���� 36.86 % ʹ�� C++ ���û�