


#include "vector"


class Solution {
public:
    int rob(std::vector<int>& nums) {
        
        // create dp vector
        std::vector<int> dp(nums.size(), 0);
        std::vector<int> state(nums.size(), 0);

        // init the dp vector
        dp[0] = nums[0];
        state[0] = 1;
        if (nums[1] > nums[0])
        {
            dp[1] = nums[1];
            state[1] = 1;
            
        }
        else
        {
            dp[1] = nums[0];
            state[1] = 0;
        }


        //��stateΪ1 ��ʱ�򣬱�ʾǰһ���Ѿ���͵����һ�Ҳ��ܱ�͵��
        // ��stateΪ0 ��ʱ�򣬱�ʾǰһ��û�б�͵��
        for (int i = 2; i < nums.size(); i++)
        {
            if (state[i-i] == 1) {
                if (nums[i] + dp[i - 2] > dp[i - 1])
                {
                    dp[i] = nums[i] + dp[i - 2];
                    state[i] = 1;
                }
                else
                {
                    dp[i] = dp[i - 1];
                    state[i] = 0;
                }
            }
            else
            {
                dp[i] = nums[i] + dp[i - 1];
                state[i] = 1;
            }
        }
        return dp[nums.size()-1];
    }
};

// 198 3��ac��dp�������