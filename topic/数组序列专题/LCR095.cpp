#include <vector>
#include <string>

class Solution {
public:
    int longestCommonSubsequence(std::string text1, std::string text2) {
        std::vector<std::vector<int>> dp(text2.size(), std::vector<int>(text1.size(), 0));

        // init
        dp[0][0] = text1[0] == text2[0];
        for (int i = 1; i < text1.size(); i++) {
            if ((text1[i] == text2[0]) || (dp[0][i - 1] == 1)) {
                dp[0][i] = 1;
            }
            else {
                dp[0][i] = 0;
            }
        }
        for (int i = 1; i < text2.size(); i++) {
            if ((text2[i] == text1[0]) || (dp[i-1][0] == 1)) {
                dp[i][0] = 1;
            }
            else {
                dp[i][0] = 0;
            }
        }

        for (int i = 1; i < text2.size(); i++)
        {
            for (int j = 1; j < text1.size(); j++)
            {
                if (text2[i] == text1[j]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else {
                    dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[text2.size() - 1][text1.size() - 1];


    }
   /* 最长公共子序列问题，说到底就是递推公式
        dp[i][j] = dp[i-1][j-1] + 1 if(text1[i] == text2[j])
        dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1])
    这个递推公式要牢牢记住*/
};