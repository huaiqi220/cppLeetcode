
#include <vector>

class Solution {
public:
   /* int search(std::vector<int>& nums, int target) {
        return quicksort(nums, target, 0, nums.size() - 1);
    }

    int quicksort(std::vector<int>& nums, int target, int left, int right)
    {
        if (left >= right - 1) {
            if (nums[left] == target) return left;
            if (nums[right] == target) return right;
            return -1;
        }

        int middle = (left + right) / 2;
        if (nums[middle] == target)return middle;
        else if (nums[middle] > target) return quicksort(nums, target, left, middle);
        else if (nums[middle] < target) return quicksort(nums, target, middle, right);
        return -1;
    }*/

    //int search(vector<int>& nums, int target) {

    //}   


};

// 我们约定每次中间值都向下取整，以此为原则设定边界，就会更有条理更清晰