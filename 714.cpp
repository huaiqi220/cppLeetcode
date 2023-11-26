

#include <vector>
#include <algorithm>
#include <cmath>


class Solution {
public:
    //int maxProfit(std::vector<int>& prices, int fee) {
    //    std::vector<std::vector<int>> result(prices.size(), std::vector<int>(prices.size(), 0));
    //    // init the dp array
    //    for (int i = 0; i < prices.size(); i++) {
    //        result[0][i] = -fee;
    //        int max = 0;
    //        int min = 0;
    //        getMaxMin(i, prices, max, min);
    //        result[i][0] = std::max(max - min - fee, 0);
    //    }
    //}

    //void getMaxMin(int i, const std::vector<int>& prices,int &max,int &min) {
    //    max = 0;
    //    min = prices[0];
    //    for (int i = 0; i < prices.size(); i++) {
    //        if (prices[i] >= max) max = prices[i];
    //        if (prices[i] <= min) min = prices[i];
    //    }
    //}
};