

#include <vector>

class Solution {
public:
    //int maxProfit(std::vector<int>& prices) {
    //    if (prices.size() == 1) return 0;
    //    int i(0); int j(1);
    //    int mon(0);
    //    while (j <= prices.size() - 1) {
    //        if (prices[j] >= prices[i]) {
    //            mon += prices[j] - prices[i];
    //            j++;
    //            i++;
    //        }
    //        else {
    //            j++;
    //            i++;
    //        }
    //    }
    //    return mon;

    //}

    // 不知道这题为什么要上动态规划这种技术，直接贪心涨价就买，跌价就不买，几分钟就做出来了
    // 但是呢，作为初学者，在这用DP实现一遍，就当是复习复习DP

    //int maxProfit(std::vector<int>& prices) {
    //    if (prices.size() == 1) return 0;
    //    int size = prices.size() - 1;
    //    std::vector<std::vector<int>> result(size, std::vector<int>(size, 0));

    //    result[0][0] = prices[1] > prices[0] ? prices[1] - prices[0] : 0;
    //    // init the dp array
    //    for (int i = 1; i < size; i++) { result[i][0] = result[0][0]; }
    //    for (int j = 1; j < size; j++){ result[0][j] = result[0][j - 1] + prices[j + 1] - prices[j]; }

    //    for (int i = 1; i < size; i++)
    //    {
    //        for (int j = 1; j < size; j++) {
    //            result[i][j] = std::max(result[i - 1][j], result[i][j - 1]);
    //        }
    //    }
    //    return result[size -1 ][size -1];


    //}

    // DP递推思路跟正常的DP不一样，这里我设计的是行每天都交易，列当天不进行交易，最后这段代码还是存在一些小问题，导致部分用例过不去
    // 不调了，按照正规DP思路实现一遍吧
    // std::vector<std::vector<int>> result(size, std::vector<int>(size, 0));DP时候的DP矩阵初始化代码，要记住。别再把size和item顺序记反

    // GPT think:
    // 通常，股票买卖问题中，result[i][j] 表示在第 i 天结束时，最多进行 j 次交易的最大利润。
    // 根据这个，思路，再来写一版本代码



    

};