
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

    // ʵ�ָ����ˣ�������ϸ���˷�ʱ�䣬�����ˣ�����׼���
};