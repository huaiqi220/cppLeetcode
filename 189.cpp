

#include <vector>



class Solution {
public:
  /*  void rotate_1(std::vector<int>& nums, int k) {
        std::vector<int>  res(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            int index = (i + k) % nums.size();
            res[index] = nums[i];
        }
        nums = res;
        // 时间复杂度O(n)，空间复杂度O(n)
    }   */

  /*  void rotate_2(std::vector<int>& nums, int k) {
        int originLen = nums.size();
        nums.insert(nums.begin(), nums.end() - k, nums.end());
        nums.erase(nums.begin() + originLen);

    }*/
    //用不明白insert erase几个函数，要学


   /* void rotate(std::vector<int>& nums, int k) {
        k = k % nums.size();
        int i = 0;
        int j = nums.size() - 1;
        while (i < j)
        {
            std::swap(nums[i], nums[j]);
            i++;
            j--;
        }

        i = 0;
        j = k - 1;
        while (i < j)
        {
            std::swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
        i = k;
        j = nums.size() - 1;
        while (i < j)
        {
            std::swap(nums[i], nums[j]);
            i++;
            j--;
        }

    }*/
    // 先整体反转，再反转前k，再反转后k

};