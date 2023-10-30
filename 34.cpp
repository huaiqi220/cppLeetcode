

#include "vector"



class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        return backTracking(nums, target, 0, nums.size() - 1);
    }

    std::vector<int> backTracking(std::vector<int>& nums, int target, int left, int right)
    {
        
        std::vector<int> result(2, -1);
        if (left > right)
        {
            return result;
        }
        int middle = (left + right) / 2;
        if (nums[middle] == target)
        {
            return getResult(nums, target, middle);
        }

        if (nums[middle] > target)
        {
            return backTracking(nums, target, left, middle - 1);
        }
        if (nums[middle] < target)
        {
            return backTracking(nums, target, middle + 1, right);
        }

        return result;

    }

    std::vector<int> getResult(std::vector<int>& nums, int target, int index)
    {
        
        int oindex = index;
        std::vector<int> result;
        while (nums[index] == target)
        {
            
            index--;
            if (index < 0)break;
            
        }
        result.push_back(index + 1);
        while (nums[oindex] == target)
        {
            
            oindex++;
            if (oindex >= nums.size())break;
            
        }
        result.push_back(oindex - 1);
        return result;




    }

};