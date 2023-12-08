


#include <vector>


class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int curMax = 0;
        int curMin = 0;
        int tempMax = 0;
        if (nums.size() <= 1)return true;

        while (true)
        {
            for (int i = curMin; i <= curMax; i++)
            {
                tempMax = i + nums[i] > tempMax ? i + nums[i] : tempMax;
            }
            curMin = curMax;
            curMax = tempMax;

            if (curMin == curMax and nums[curMin] == 0)
            {
                return false;
            }
            if (curMax >= nums.size() - 1) {
                return true;
            }
        }
        return false;

    }
};

// 做完45题的基础之上，这个题目一遍过