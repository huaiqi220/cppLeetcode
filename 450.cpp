

#include <vector>


class Solution {
	struct TreeNode
	{
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode() :val(0) {}
		TreeNode(int value):val(value),left(nullptr),right(nullptr){}
		TreeNode(int value,TreeNode* left,TreeNode* right) :val(value), left(left), right(right) {}
	};

public:
   /* TreeNode* deleteNode(TreeNode* root, int key) {
		TreeNode* tempRoot = root;
		TreeNode* prior = root;
		if (root == nullptr)return root;

		while (tempRoot->val != key)
		{
			if (tempRoot->val > key) {
				prior = tempRoot;
				tempRoot = tempRoot->left;
				if (tempRoot == nullptr) {
					prior = nullptr;
					break;
				}
			}
			else if (tempRoot->val < key) {
				prior = tempRoot;
				tempRoot = tempRoot->right;
				if (tempRoot == nullptr) {
					prior = nullptr;
					break;
				}
			}
		}

		if (prior == nullptr)return root;

		if (prior->left->val == key)prior->left = delThis(root->left);
		if (prior->right->val == key)prior->right = delThis(root->right);
		return root;



    }
	TreeNode* delThis(TreeNode* root)
	{
		if (root->left == nullptr and root->right == nullptr)
		{
			return nullptr;
		}
		if (root->right == nullptr) {
			return  root->left;
			 
		}
		if (root->right != nullptr) {
			TreeNode* curRoot = root->right;
			curRoot->left = root->left;
			curRoot->right = delThis(root->right);
		}


	}*/

};