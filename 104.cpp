



#include "vector"
#include "unordered_map"
#include "cmath"



//
//class Solution {
//
    //struct TreeNode {
    //    int val;
    //    TreeNode* left;
    //    TreeNode* right;
    //    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    //    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    //    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    //};
//
//public:
//    int maxDepth(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        std::unordered_map<TreeNode*, int> myMap;
//        backTracking(root, 0, myMap);
//        int maxLevel = 0;
//        for (auto item : myMap)
//        {
//            int level = item.second;
//            if (level > maxLevel) maxLevel = level;
//        }
//        return maxLevel + 1;
//
//    }
//
//
//    void backTracking(TreeNode* root, int level, std::unordered_map<TreeNode*, int>& map)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        backTracking(root->left, level + 1, map);
//        map[root] = level;
//        backTracking(root->right, level + 1, map);
//    }
//};


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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        return std::max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

// 一个递归能解决的问题，搞这么复杂

