
#include "vector"


class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
        // create dp vector
        std::vector<int> dp(nums.size(),1);

        // init dp vector
        dp[0] = 1;
        if (nums.size() == 1)
        {
            return 1;
        }
        if (nums[1] > nums[0])
        {
            dp[1] = 2;
        }
        else
        {
            dp[1] = 1;
        }

        // dp method
        for (int i = 2; i < nums.size(); i++)
        {
            int maxj = 0;
            for (int j = 0; j < i; j++)
            {
                if (dp[j] > maxj and nums[j] < nums[i])
                    maxj = dp[j];
            }

            dp[i] = 1 + maxj;
        }

        int result = 0;
        for (auto item : dp)
        {
            if (item > result)
            {
                result = item;
            }
        }
        return result;

    }
};

//两次提交就做出来了
//
//但还是在看了递归公式提示之后才做出来的
//
//以前只做过打家劫舍这种连续的dp递推，这个则是在递推公式中还加入了另一重循环
//
//LIS(nums,i) = 1 + max(LIS(nums,j))
//
//其中j 必须 < i and nums[j] < nums[i]
//
//为了计算这个max,在递推时候加了一个循环，这个递推公式要记住。
//
//时间复杂度比较低，还可以，但空间复杂度还有优化的空间
//
//时间
//详情
//216ms
//击败 72.85 % 使用 C++ 的用户
//内存
//详情
//10.28MB
//击败 33.90 % 使用 C++ 的用户