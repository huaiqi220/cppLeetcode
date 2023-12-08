



#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        // init the dp array
        std::vector<std::vector<int>> dp;
        for (int i = 0; i < numRows; i++)
        {
            std::vector<int> item(i + 1, 1);
            dp.push_back(item);
        }

        for (int i = 2; i < numRows; i++) {
            for (int j = 1; j < i; j++) {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
        return dp;
    }
};

// 没什么价值，就告诉你要用dp了