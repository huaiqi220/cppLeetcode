
#include <vector>


class Solution {
public:
    //int jump(std::vector<int>& nums) {
    //    std::vector<int> dp(nums.size(), 0);
    //    for (int i = 0; i <= nums[0]; i++)
    //    {
    //        dp[i] = 1;
    //    }
    //    if (nums.size() < 1 or nums[0] == 0) {
    //        return 0;
    //    }
    //    if (nums.size() == 1 and nums[0] != 0) {
    //        return 1;
    //    }
    //    int i = 0;
    //    int j = nums[0];
    //    while (true) {
    //        int curMax = 0;
    //        for (int i = 0; i <= j; i++)
    //        {
    //            curMax = i + nums[i] > curMax ? i + nums[i] : curMax;
    //        }

    //        curMax = curMax > nums.size() - 1 ? nums.size() - 1 : curMax;
    //        for (int i = j + 1; i <= curMax; i++) {
    //            dp[i] = dp[j] + 1;
    //        }
    //        i = j + 1;
    //        j = curMax;

    //        if (j == nums.size() - 1) {
    //            break;
    //        }

    //    }
    //    return dp[nums.size() - 1];



    //}

    // 实现复杂了，扣索引细节浪费时间，不调了，看标准题解


    //int jump(std::vector<int>& nums) {
    //    int curMin = nums.size() - 1;
    //    int step = 0;
    //    int curMark = nums.size() - 1;
    //    while(curMin > 0)
    //    {
    //        for (int i = curMark - 1; i >=0; i--)
    //        {
    //            if (i + nums[i] >= curMark) curMin = i;
    //        }
    //        curMark = curMin;
    //        step++;
    //    }
    //    return step;
    //}

    // C++贪心 O(n^2)
    // O(n)方法就是我上面那个，但问题是实现的复杂了
    // 再写一下

    int jump(std::vector<int>& nums) {
        int curMax = 0;
        int curMin = 0;
        int tempMax = 0;
        int step = 0;

        if (nums.size() == 1) return 0;
        // 啥比题目，给出[0],[1]这种用例恶心人

        while (curMax < nums.size())
        {
            for (int i = curMin; i <= curMax; i++)
            {
                tempMax = i + nums[i] > tempMax ? i + nums[i] : tempMax;
            }

            curMin = curMax + 1;
            curMax = tempMax;
            step++;
            if (curMax >= nums.size() - 1) {
                break;
            }
        }
        return step;

    }
    // O(n),这种时间复杂度跟第一种是一样的，区别是第一次实现的时候代码写的比较复杂
};