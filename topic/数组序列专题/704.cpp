
 /*   二分查找算法实现*/


#include <vector>


class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        //return searchHelper(nums, target, 0, nums.size() - 1);
    }
    
   /* int searchHelper(std::vector<int>& nums, int target, int left, int right)
    {
        int middle = (left + right) / 2;
        if (right - 1 <= left)
        {
            for (int i = left; i <= right; i++)
            {
                if (nums[i] == target)return i;
            }
            return -1;
        }
        if (target == nums[middle])return middle;
        if (target > nums[middle]) return searchHelper(nums, target, middle, right);
        if (target < nums[middle]) return searchHelper(nums, target, left, middle);
        递归实现
    }*/

  /*  int searchHelper2(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int middle = (left + right) / 2;
            if (right - 1 <= left) {
                if (nums[left] == target) return left;
                if (nums[right] == target) return right;
                return -1;
            }
            if (nums[middle] == target)return middle;
            if (nums[middle] < target) left = middle;
            if (nums[middle] > target) right = middle;
            return -1;
        }
    }*/

    int searchHelper3(std::vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int middle = left + (right - left) / 2;
            if (nums[middle] == target)return middle;
            if (nums[middle] < target) left = middle + 1;
            if (nums[middle] > target) right = middle - 1;
        }
        return -1;
    }
   /* 最优雅的方法，不用最后去判断什么right是不是left + 1*/

};