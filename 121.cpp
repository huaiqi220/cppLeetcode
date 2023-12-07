

#include <vector>
class Solution {
public:
  /*  int maxProfit(std::vector<int>& prices) {

        if (prices.size() <= 1) return 0;
        std::vector<int> multi;
        for (int i = 0; i <= prices.size() - 2; i++)
        {
            multi.push_back(prices[i + 1] - prices[i]);
        }

        return maxSubArray(multi) >= 0 ? maxSubArray(multi) : 0;

    }

    int maxSubArray(std::vector<int>& nums) {
        std::vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            dp[i] = std::max(dp[i - 1] + nums[i], nums[i]);
        }

        return *std::max_element(dp.begin(), dp.end());

    }*/

    int maxProfit(std::vector<int>& prices) {
        int curMin = prices[0];
        int curProfile = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            int today = prices[i];
            curMin = std::min(curMin, today);
            int todayProfile = today - curMin;
            curProfile = std::max(curProfile, todayProfile);
        }
        return curProfile;

    }
    //记录在当前之前的最小价格，然后用当天价格减去最小价格，不断往后遍历
    // 巧妙地蕴含了时间先后，即只能用后高价减去前低价，而不可能相反
};

// 丑陋的解法，显然跟贪心没有任何关系，反而用的是DP的方法，
// 如何使用贪心求解，需要继续学习