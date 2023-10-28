

#include "vector"

//
//class Solution {
//public:
//    int findKthLargest(std::vector<int>& nums, int k) {
//        return backTracking(nums, k);
//    }
//
//
//
//    int backTracking(std::vector<int> nums, int k)
//    {
//        int pvort = nums[0];
//        int left = 0;
//        int right = nums.size() - 1;
//
//        while (left < right)
//        {
//            while (nums[left] < pvort)
//            {
//                left++;
//            }
//            while (nums[right > pvort])
//            {
//                right--;
//            }
//            std::swap(nums[left], nums[right]);
//        }
//
//        if (nums.size() - right == k)
//        {
//            return nums[right];
//        }
//        if (nums.size() - right < k)
//        {
//            nums.resize(left);
//            return backTracking(nums, k - (nums.size() - right));
//        }
//        if (nums.size() - right > k)
//        {
//            nums.erase(nums.begin(), nums.end() - k);
//            return backTracking(nums, (nums.size() - right) - k);
//        }
//
//        return -1;
// 
//
//    }
//};
//
