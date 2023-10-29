
#include "vector"

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        if (nums.size() == 1 and target > nums[0])
        {
            return 1;
        }
        if (nums.size() == 1 and target < nums[0])
        {
            return 0;
        }

        return findLocation(nums, target, 0, nums.size() - 1);



    }

    int findLocation(std::vector<int>& nums, int target, int left, int right)
    {
        if (left > right) {
            return left; // Insertion position when the target is not found
        }

        int middle = (left + right) / 2;
        if (nums[middle] == target)
        {
            return middle;
        }
        if (nums[middle] > target)
        {
            return findLocation(nums, target, left, middle - 1);
        }
        if (nums[middle] < target)
        {
            return findLocation(nums, target, middle + 1, right);
        }
    }
};


// 一次ac ,在有gpt的帮助下
// 这个算法其实可以背住，尤其是如何处理if中left right middle如何变化的时候，以及程序结束条件，这块，都很容易出错