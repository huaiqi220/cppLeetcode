

#include <vector>
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {

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

    }
};

// ��ª�Ľⷨ����Ȼ��̰��û���κι�ϵ�������õ���DP�ķ�����
// ���ʹ��̰����⣬��Ҫ����ѧϰ