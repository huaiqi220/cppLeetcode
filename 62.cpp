

#include "vector"


class Solution {
public:
    int uniquePaths(int m, int n) {

        // create dp vector
        std::vector<std::vector<int>> dp;
        for (int i = 0; i < m; i++)
        {
            std::vector<int> temp(n,0);
            dp.push_back(temp);
        }

        // init dp vector
        for (int i = 0; i < n; i++)
        {
            dp[0][i] = 1;
        }
        for (int j = 0; j < m; j++)
        {
            dp[j][0] = 1;
        }

        // dp
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[m - 1][n - 1];




    }
};

//ʱ��
//
//4ms
//���� 30.40 % ʹ�� C++ ���û�
//�ڴ�
//
//6.61MB
//���� 11.14 % ʹ�� C++ ���û�