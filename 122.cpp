

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

    // ��֪������ΪʲôҪ�϶�̬�滮���ּ�����ֱ��̰���Ǽ۾��򣬵��۾Ͳ��򣬼����Ӿ���������
    // �����أ���Ϊ��ѧ�ߣ�������DPʵ��һ�飬�͵��Ǹ�ϰ��ϰDP

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

    // DP����˼·��������DP��һ������������Ƶ�����ÿ�춼���ף��е��첻���н��ף������δ��뻹�Ǵ���һЩС���⣬���²�����������ȥ
    // �����ˣ���������DP˼·ʵ��һ���
    // std::vector<std::vector<int>> result(size, std::vector<int>(size, 0));DPʱ���DP�����ʼ�����룬Ҫ��ס�����ٰ�size��item˳��Ƿ�

    // GPT think:
    // ͨ������Ʊ���������У�result[i][j] ��ʾ�ڵ� i �����ʱ�������� j �ν��׵��������
    // ���������˼·������дһ�汾����



    

};