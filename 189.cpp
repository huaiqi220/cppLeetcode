

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
        // ʱ�临�Ӷ�O(n)���ռ临�Ӷ�O(n)
    }   */

  /*  void rotate_2(std::vector<int>& nums, int k) {
        int originLen = nums.size();
        nums.insert(nums.begin(), nums.end() - k, nums.end());
        nums.erase(nums.begin() + originLen);

    }*/
    //�ò�����insert erase����������Ҫѧ


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
    // �����巴ת���ٷ�תǰk���ٷ�ת��k

};