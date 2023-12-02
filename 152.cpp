


#include <vector>


class Solution {
public:
    // 正确的DP方法，分正负两种情况讨论，妙啊
    int maxProduct(std::vector<int>& nums) {
        std::vector<int> max;
        std::vector<int> min;
        for (int i = 0; i < nums.size(); i++) {
            max[i] = std::max(max[i - 1] * nums[i], std::max(nums[i], min[i - 1] * nums[i]));
            min[i] = std::min(max[i - 1] * nums[i], std::min(nums[i], min[i - 1] * nums[i]));
        }
        return *std::max_element(max.begin(), max.end());

    }

    //int maxProduct(std::vector<int>& nums) {
    //    
    //    std::vector<std::vector<int>> dp(nums.size(), std::vector<int>(nums.size(), 0));

    //    // init the array
    //    for (int i = 0; i < nums.size(); i++) {
    //        dp[i][i] = nums[i];
    //    }
    //    int max = -10;

    //    // fill the dp
    //    for (int i = 0; i < nums.size(); i++) {
    //        for (int j = i + 1; j < nums.size(); j++) {
    //            dp[i][j] = dp[i][j - 1] * nums[j];
    //            if (dp[i][j] > max) { max = dp[i][j]; }
    //        }
    //    }
    //    for (auto item : nums) {
    //        if (item > max) max = item;
    //    }
    //    return max;


    //}
};


// 仔细思索，上面一种解法其实不是动态规划，而是属于一种记忆化搜索算法。
// 简言之通过dp数据把结果存下来，避免重复计算。但实质上有也是暴力算法。
// 在遇到特殊用例，好比如后面加了1000个1、-1时候直接就超时超空间，这题应该正确的用动态规划思路来思考
// 什么B脑瘫用例啊，全是1和-1
