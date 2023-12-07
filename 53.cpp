



// 股票问题给我做差转换成了最大子数组和问题，结果发现最大子数组和问题不会求
// 做一下子

#include <vector>
#include <algorithm>

class Solution {

    struct Status {
        int leftSumMax;
        int rightSumMax;
        int Max;
        int mSum;
    };

public:
    //int maxSubArray(std::vector<int>& nums) {
    //    std::vector<int> dp(nums.size(), 0);
    //    dp[0] = nums[0];
    //    for (int i = 1; i < nums.size(); i++)
    //    {
    //        dp[i] = std::max(dp[i - 1] + nums[i], nums[i]);
    //    }

    //    // 迭代器，*迭代器就可以获得值，迭代器其实就是指向元素的指针
    //    return *std::max_element(dp.begin(), dp.end());

    //}
    int maxSubArray(std::vector<int>& nums) {

    }








};
//
//为了保证计算子问题能够按照顺序、不重复地进行，动态规划要求已经求解的子问题不受后续阶段的影响。这个条件也被叫做「无后效性」。换言之，动态规划对状态空间的遍历构成一张有向无环图，遍历就是该有向无环图的一个拓扑序。有向无环图中的节点对应问题中的「状态」，图中的边则对应状态之间的「转移」，转移的选取就是动态规划中的「决策」。

