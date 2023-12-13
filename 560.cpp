


#include <vector>
#include <unordered_map>


class Solution {
public:
  /*  int subarraySum(std::vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = 0;
            for (int j = i; j < nums.size(); j++) {
                temp += nums[j];
                if (temp == k) {
                    count++;
                    break;
                }
                if (temp > k)break;
            }
        }
        return count;
    }*/
    // 过不了1w个1的用例

   /* int subarraySum(std::vector<int>& nums, int k) {
        std::vector<int> temp(nums.size() + 1, 0);
        int tem = 0;
        for (int i = 1; i <= nums.size(); i++) {
            tem += nums[i - 1];
            temp[i] = tem;
        }
        int count = 0;
        for (int i = 1; i <= nums.size(); i++)
        {
            for (int j = i; j <= nums.size(); j++)
            {
                if (temp[j] - temp[i - 1] == k)count++;
            }
        }
        return count;
    }*/

    int subarraySum(std::vector<int>& nums, int k) {
        int curTotal = 0;
        std::unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            curTotal += nums[i];
           /* mp[curTotal] += 1;*/
            count += mp[curTotal - k];
            mp[curTotal] += 1;
        }
        return count;
    }
    // 很巧妙的方法，注意考虑这个mp[curTotal] += 1的位置，不能放在count +=之前，不然当k = 0时会把自己统计进去
};