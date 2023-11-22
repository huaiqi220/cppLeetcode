


#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<int> temp;
        std::vector<std::vector<int>> result;
        backTracking(0, nums, temp, result);
        return result;


    }

    void backTracking(int curIndex, const std::vector<int>& nums, std::vector<int>& temp, std::vector<std::vector<int>>& result)
    {
        if (curIndex == nums.size()) {
            result.push_back(temp);
            return;
        }
        // 取得数字
        int num = nums[curIndex];

        temp.push_back(num);
        backTracking(curIndex + 1, nums, temp, result);
        temp.pop_back();
        backTracking(curIndex + 1, nums, temp, result);

    }
};

// 标准的递归，没什么难度，即使五分钟写出来了，依然得练，代码有优化的空间
// 明天用迭代做一下