﻿#include <vector>


class Solution {
public:
  /*  int searchInsert(std::vector<int>& nums, int target) {
        return binarySearch(nums, target);
    }

    int binarySearch(std::vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int middle = left + (right - left) / 2;
            if (nums[middle] > target) {
                if (left == middle)return middle;
                right = middle - 1;
            }
            if (nums[middle] < target) {
                if (left == right)return middle + 1;
                left = middle + 1;
            }
            if (nums[middle] == target) return middle;
        }
        return 0;
    }*/
    // 二分查找的变种，没完全掌握，debug了好多次

    int searchInsert(std::vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n - 1; // 定义target在左闭右闭的区间里，[left, right]
        while (left <= right) { // 当left==right，区间[left, right]依然有效
            int middle = left + ((right - left) / 2);// 防止溢出 等同于(left + right)/2
            if (nums[middle] > target) {
                right = middle - 1; // target 在左区间，所以[left, middle - 1]
            } else if (nums[middle] < target) {
                left = middle + 1; // target 在右区间，所以[middle + 1, right]
            } else { // nums[middle] == target
                return middle;
            }
        }
        // 分别处理如下四种情况
        // 目标值在数组所有元素之前  [0, -1]
        // 目标值等于数组中某一个元素  return middle;
        // 目标值插入数组中的位置 [left, right]，return  right + 1
        // 目标值在数组所有元素之后的情况 [left, right]， 因为是右闭区间，所以 return right + 1
        return right + 1;
    }
    // 什么意思，为什么right +1;
};