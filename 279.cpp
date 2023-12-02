

#include <vector>
#include <cmath>

class Solution {
public:
    int numSquares(int n) {
        int max = std::sqrt(n) + 1;
        std::vector<int> coins;
        for (int i = 1; i <= max; i++) {
            coins.push_back(i * i);
        }
        std::vector<int> dp(n + 1, n + 1);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (i - coins[j] >= 0)dp[i] = std::min(dp[i], dp[i - coins[j]] + 1);
            }
        }

        return dp[n] > n ? -1 : dp[n];


    }
};

// ������ʱ�临�Ӷȣ������Զ��DP,��ʵ����Ҫһ��coins���飬ֱ��i - j^2����
// һ���������������������ѧ����