


#include "vector"
#include <algorithm>

class Solution {
public:
    //int coinChange(std::vector<int>& coins, int amount) {
    //    int result = -1;
    //    backTracking(coins, amount, 0, 0, result);
    //    return result;
    //}

    //void backTracking(std::vector<int> coins, int mount, int curMoney, int level, int& result) {
    //    if (curMoney == mount) { if (result == -1) { result = level; } else { result = std::min(result, level); } }
    //    if (curMoney > mount)return;
    //    for (auto item : coins) {
    //         backTracking(coins, mount, curMoney + item, level + 1, result); 
    //    }

    //}\


    // ����һ����Bug��DP���룬���˾��ÿ��ܲ�����ȷ��DP���
    // �ðɣ�˼·����ȷ�ģ�����ʵ�����е㸴��
    // 
    // 
    // 
    //int coinChange(std:: vector<int>& coins, int amount) {
    //    std::vector<int> temp(amount + 1, -1);

    //    // init the dp array һ�����ܵ����λ��
    //    int min = amount;
    //    for (auto item : coins) {
    //        
    //        if (item <= amount) {
    //            if (item < min) min = item;
    //            temp[item] = 1;
    //        }
    //    }

    //    for (int i = min; i <= amount; i++) {
    //        int curMark = -1;
    //        for (auto item : coins) {
    //            int index = i - item;
    //            if (index >= min) {
    //                if (temp[index] != -1) {
    //                    if (curMark == -1) { curMark = temp[index]; }
    //                    else { curMark = std::min(curMark, temp[index]); }
    //                }
    //            }
    //        }

    //        if (temp[i] != -1 and curMark != -1) {
    //            temp[i] = std::min(curMark + 1, temp[i]);
    //        }

    //        if (curMark == -1 and temp[i] == -1) {
    //            temp[i] = -1;
    //        }

    //        
    //    }

    //    return temp[amount];

    //}


    int coinChange(std::vector<int>& coins, int amount) {
        int max = amount + 1;
        std::vector<int> dp(amount + 1, max);
        dp[0] = 0;
        for (int i = 0; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (coins[j] <= i) {
                    dp[i] = std::min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];



    }

};
// ʮ����д���ĵݹ��㷨��������ȷ��
// ����Ȼ������������Ҫ�������⣬���ڻ���������DP����
// �����ĵ���������DP