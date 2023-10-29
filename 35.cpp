
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


// һ��ac ,����gpt�İ�����
// ����㷨��ʵ���Ա�ס����������δ���if��left right middle��α仯��ʱ���Լ����������������飬�������׳���