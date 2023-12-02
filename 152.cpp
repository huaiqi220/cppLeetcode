


#include <vector>


class Solution {
public:
    // ��ȷ��DP����������������������ۣ��
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


// ��ϸ˼��������һ�ֽⷨ��ʵ���Ƕ�̬�滮����������һ�ּ��仯�����㷨��
// ����֮ͨ��dp���ݰѽ���������������ظ����㡣��ʵ������Ҳ�Ǳ����㷨��
// �����������������ñ���������1000��1��-1ʱ��ֱ�Ӿͳ�ʱ���ռ䣬����Ӧ����ȷ���ö�̬�滮˼·��˼��
// ʲôB��̱��������ȫ��1��-1
