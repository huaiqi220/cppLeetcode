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
//时间
//详情
//4ms
//击败 39.99 % 使用 C++ 的用户
//内存
//详情
//8.23MB
//击败 36.86 % 使用 C++ 的用户