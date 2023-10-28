
#include "vector"


class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
        // create dp vector
        std::vector<int> dp(nums.size(),1);

        // init dp vector
        dp[0] = 1;
        if (nums.size() == 1)
        {
            return 1;
        }
        if (nums[1] > nums[0])
        {
            dp[1] = 2;
        }
        else
        {
            dp[1] = 1;
        }

        // dp method
        for (int i = 2; i < nums.size(); i++)
        {
            int maxj = 0;
            for (int j = 0; j < i; j++)
            {
                if (dp[j] > maxj and nums[j] < nums[i])
                    maxj = dp[j];
            }

            dp[i] = 1 + maxj;
        }

        int result = 0;
        for (auto item : dp)
        {
            if (item > result)
            {
                result = item;
            }
        }
        return result;

    }
};

//�����ύ����������
//
//�������ڿ��˵ݹ鹫ʽ��ʾ֮�����������
//
//��ǰֻ������ҽ�������������dp���ƣ���������ڵ��ƹ�ʽ�л���������һ��ѭ��
//
//LIS(nums,i) = 1 + max(LIS(nums,j))
//
//����j ���� < i and nums[j] < nums[i]
//
//Ϊ�˼������max,�ڵ���ʱ�����һ��ѭ����������ƹ�ʽҪ��ס��
//
//ʱ�临�ӶȱȽϵͣ������ԣ����ռ临�ӶȻ����Ż��Ŀռ�
//
//ʱ��
//����
//216ms
//���� 72.85 % ʹ�� C++ ���û�
//�ڴ�
//����
//10.28MB
//���� 33.90 % ʹ�� C++ ���û�